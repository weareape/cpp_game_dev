#pragma once

#include "student.hpp"
#include "teacher.hpp"
#include <string>
#include <unordered_map>

class Course{
    private:
        int m_courseSizeCap;

        std::string m_courseName;
        std::string m_courseDescription;

        
    public:
        Course(
            int COURSESIZECAP,

            std::string &COURSENAME, 
            std::string &COURSEDESCRIPTION
        );

        void GetCourseInfo() {
            std::cout << "Enrollment Cap: " << m_courseSizeCap << "\n";
            std::cout << "Course Name: " << m_courseName << "\n";
            std::cout << "Course Description: " << m_courseDescription << "\n";
        }
};