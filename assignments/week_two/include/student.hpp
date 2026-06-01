#pragma once

#include "user.hpp"

class Student: public User{
    private:
        float m_balance;

    public:
        Student(
            std::string &NAME,
            std::string &EMAIL, 
            
            int AGE, 
            size_t ID,
            float BALANCE
        );

        void GetUserInfo() const override;
        
};