#include "course.hpp"

Course::Course(
    int &COURSESIZECAP,

    std::string &COURSENAME,
    std::string &COURSEDESCRIPTION

    // std::unordered_map<std::string, Teacher*> &INSTRUCTOR,
    // std::unordered_map<std::string, Student*> &STUDENTS
):  m_courseSizeCap(std::move(COURSESIZECAP)),
    m_courseName(std::move(COURSENAME)),
    m_courseDescription(std::move(COURSEDESCRIPTION)){

}

// void Course::GetCourseInfo() const {
//     std::cout << "Enrollment Cap" << m_courseSizeCap << "\n";
//     std::cout << "Course Name" << m_courseName << "\n";
//     std::cout << "Course Description" << m_courseDescription << "\n";
//}
    