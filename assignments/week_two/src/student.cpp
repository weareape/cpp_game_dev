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

void Student::GetUserInfo() const {
    std::cout << "Student Info" << "\n";
    std::cout << "Name: " << m_name << "\n";
    std::cout << "Email: " << m_email << "\n";
    std::cout << "Subject: " << m_subject << "\n";
    std::cout << "Age: " << m_age << "\n";
    std::cout << "ID: " << m_id << "\n";
    std::cout << "Balance: " << m_balance << "\n";
    std::cout << "\----------------------------" << "\n";
}