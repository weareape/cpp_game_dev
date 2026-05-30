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

        //std::unordered_map<std::string, Teacher*> m_Instructor;
        //std::unordered_map<std::string, Student*> m_students;
        
    public:
        Course(
            int &COURSESIZECAP,

            std::string &COURSENAME, 
            std::string &COURSEDESCRIPTION
        );
            
            // std::unordered_map<std::string, Teacher* > &INSTRUCTOR,
            // std::unordered_map<std::string, Student* > &STUDENTS);

        // virtual void GetInstructor() const = 0;
        // virtual void AddInstructor(std::string &instructor_name, Teacher* instructor) = 0;

        // virtual void GetAllStudents() const = 0;
        // virtual void AddStudent(std::string &student_name, Student* student) = 0;
        
        // virtual void GetCourseInfo() const = 0;
        void GetCourseInfo() {
            std::cout << "Enrollment Cap: " << m_courseSizeCap << "\n";
            std::cout << "Course Name: " << m_courseName << "\n";
            std::cout << "Course Description: " << m_courseDescription << "\n";
        }
};