#include "school.hpp"

School::School(
    size_t ID,

    std::string &NAME,
    int YEARESTABLISHED,
    std::unordered_map<std::string, Student *> &STUDENTS
    
):  m_id(std::move(ID)),
    m_name(std::move(NAME)),
    m_yearEstablished(std::move(YEARESTABLISHED)),
    m_students(std::move(STUDENTS)){

}