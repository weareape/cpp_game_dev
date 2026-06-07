#include "backends/imgui_impl_glfw.h"
#include "backends/imgui_impl_opengl3.h"
#include "imgui.h"
#include <GLFW/glfw3.h>
#include <iostream>
#include <algorithm>

const int WINDOW_WIDTH = 1280;
const int WINDOW_HEIGHT = 720;

void MySaveFunction(){
    std::cout << "Saving.....\n";
}

int main(){
    if (!glfwInit())
        return -1;

    GLFWwindow *window = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "UI_DEV", nullptr, nullptr);
    glfwMakeContextCurrent(window);
    glfwSwapInterval(1);

    //ImGui
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO &io = ImGui::GetIO();

    //Renderer Setup
    ImGui_ImplGlfw_InitForOpenGL(window, true);
    ImGui_ImplOpenGL3_Init("#version 130");

    //Main Loop
    while (!glfwWindowShouldClose(window)){
        glfwPollEvents();

        //ImGui Frame
        ImGui_ImplOpenGL3_NewFrame();
        ImGui_ImplGlfw_NewFrame();
        ImGui::NewFrame();

        //Key Inputs
        if (ImGui::GetIO().KeyCtrl && ImGui::IsKeyPressed(ImGuiKey_S)){
        MySaveFunction();
        }

        static float splitter_y = 200.0f; 
        const float thickness = 4.0f; 

        ImVec2 available_size = ImGui::GetContentRegionAvail();

        bool my_tool_active = true;
        static float my_color[4] = {1.0f, 1.0f, 1.0f, 1.0f};
     
        //Create a window called "My First Tool", with a menu bar.
        ImGui::Begin("Effects Menu", &my_tool_active, ImGuiWindowFlags_MenuBar);
        if (ImGui::BeginMenuBar())
        {
            if (ImGui::BeginMenu("File"))
            {
                if (ImGui::MenuItem("Open..", "Ctrl+O")) { /* Do stuff */ }
                if (ImGui::MenuItem("Save", "Ctrl+S"))   { MySaveFunction();}
                if (ImGui::MenuItem("Close", "Ctrl+W"))  { my_tool_active = false; }
                ImGui::EndMenu();
            }
            ImGui::EndMenuBar();
        }

        //Top Window
        ImGui::BeginChild("TopView", ImVec2(available_size.x, splitter_y), ImGuiChildFlags_None);

        //Edit a color stored as 4 floats
        ImGui::ColorEdit4("Color", my_color);

        ImGui::EndChild();

        //Horizontal Splitter
        ImGui::InvisibleButton("##Splitter", ImVec2(available_size.x, thickness));

        ImU32 splitter_color;

        if (ImGui::IsItemActive()){

            splitter_y += ImGui::GetIO().MouseDelta.y;
            splitter_y = std::clamp(splitter_y, 50.0f, available_size.y - 50.0f);

            splitter_color = IM_COL32(100, 149, 237, 255);
            ImGui::SetMouseCursor(ImGuiMouseCursor_ResizeNS);
        }
        //Give visual feedback when hovering or dragging
        else if (ImGui::IsItemHovered()){

            splitter_color = IM_COL32(160, 160, 160, 255);
            ImGui::SetMouseCursor(ImGuiMouseCursor_ResizeNS);
        }
        
        else{
            splitter_color = IM_COL32(65, 65, 65, 255);
        }

        ImVec2 window_pos = ImGui::GetWindowPos();
        float window_width = ImGui::GetWindowWidth();

        ImVec2 min_bound = ImVec2(window_pos.x, ImGui::GetItemRectMin().y);
        ImVec2 max_bound = ImVec2(window_pos.x + window_width, ImGui::GetItemRectMax().y);

        ImGui::GetWindowDrawList()->AddRectFilled(min_bound, max_bound, splitter_color);

        //Bottom Window
        float bottom_height = available_size.x - splitter_y - thickness;
        ImGui::BeginChild("BottomView", ImVec2(available_size.x, bottom_height), ImGuiChildFlags_None);
        
        ImGui::TextColored(ImVec4(1,1,0,1), "Important Stuff");

        ImGui::EndChild();
        
        ImGui::End();

        //Renderer
        ImGui::Render();
        int display_w, display_h;
        glfwGetFramebufferSize(window, &display_w, &display_h);
        glViewport(0, 0, display_w, display_h);
        glClear(GL_COLOR_BUFFER_BIT);
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

        glfwSwapBuffers(window);

    }

    //Cleanup
    ImGui_ImplOpenGL3_Shutdown();
    ImGui_ImplGlfw_Shutdown();
    ImGui::DestroyContext();

    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}