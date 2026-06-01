#pragma once

#include "user.hpp"

class Teacher: public User{
    private:
        int m_studentsTotal;

    public:
        Teacher(
            std::string &NAME,
            std::string &EMAIL,

            int AGE,
            size_t ID,
            int STUDENTSTOTAL
        );

        void GetUserInfo() const override;
        
};