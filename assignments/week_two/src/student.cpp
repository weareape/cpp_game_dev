#include "student.hpp"

Student::Student(
    std::string &NAME,
    std::string &EMAIL, 
    std::string &SUBJECT, 
    
    int AGE, 
    size_t ID,
    float BALANCE
): User(NAME, EMAIL, SUBJECT, AGE, ID), 
        m_balance(std::move(BALANCE)){

}