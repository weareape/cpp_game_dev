#include "teacher.hpp"

Teacher::Teacher(
    std::string &NAME,
    std::string &EMAIL,

    int AGE,
    size_t ID,
    int STUDENTSTOTAL
): User(NAME, EMAIL, AGE, ID),
    m_studentsTotal(std::move(STUDENTSTOTAL)){

}

void Teacher::GetUserInfo() const {
    
}