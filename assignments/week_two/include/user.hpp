#pragma once

#include <cstddef>
#include <string>
#include <iostream>

class User{
    protected:
        std::string m_name;
        std::string m_email;

        int m_age;
        size_t m_id;

    public:
        User(
            std::string &NAME, 
            std::string &EMAIL, 
            
            int AGE, 
            size_t ID);

        virtual void GetUserInfo() const = 0;       
};