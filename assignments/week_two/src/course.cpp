#include "course.hpp"

Course::Course(
    int COURSESIZECAP,

    std::string &COURSENAME,
    std::string &COURSEDESCRIPTION


):  m_courseSizeCap(std::move(COURSESIZECAP)),
    m_courseName(std::move(COURSENAME)),
    m_courseDescription(std::move(COURSEDESCRIPTION)){

}


    