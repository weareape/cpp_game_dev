#include "teacher.hpp"

Teacher::Teacher(
    std::string &NAME,
    std::string &EMAIL,
    std::string &SUBJECT,

    int AGE,
    size_t ID,
    int STUDENTSTOTAL
): User(NAME, EMAIL, SUBJECT, AGE, ID),
    m_studentsTotal(std::move(STUDENTSTOTAL)){

}

void Teacher::GetUserInfo() const {
    
}