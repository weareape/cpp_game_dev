#pragma once

#include <cstddef>
#include <string>
#include <iostream>


class School{
    private:
        size_t m_id;
        
        std::string m_name;
        int m_yearEstablished;


    public:
        School(
            size_t ID,

            std::string &NAME,
            int YEARESTABLISHED);

        void GetSchoolInfo() {
            std::cout << "~School Info~" << "\n";
            std::cout << "School ID: " << m_id << "\n";
            std::cout << "School Name: " << m_name << "\n";
            std::cout << "Established: " << m_yearEstablished << "\n";
            std::cout << "-----------------------------------\n";
        }
};