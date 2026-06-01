#pragma once

#include <cstddef>
#include <string>
#include <iostream>
#include <unordered_map>

#include "student.hpp"
#include "teacher.hpp"
#include "course.hpp"


class School{
    private:
        size_t m_id;
        
        std::string m_name;
        int m_yearEstablished;
        std::unordered_map<std::string, Student*> m_students;


    public:
        School(
            size_t ID,


            std::string &NAME,
            int YEARESTABLISHED,
        
            std::unordered_map<std::string, Student* > &STUDENTS);

        void GetSchoolInfo() {
            std::cout << "~School Info~" << "\n";
            std::cout << "School ID: " << m_id << "\n";
            std::cout << "School Name: " << m_name << "\n";
            std::cout << "Established: " << m_yearEstablished << "\n";
            std::cout << "-----------------------------------\n";
        }
};