#pragma once

#include <cstddef>
#include <string>

class User{
    protected:
        std::string m_name;
        std::string m_email;
        std::string m_subject;

        int m_age;
        size_t m_id;

    public:
        User(
            std::string &NAME, 
            std::string &EMAIL, 
            std::string &SUBJECT, 
            
            int AGE, 
            size_t ID);

        virtual void GetUserInfo() const = 0;       
};