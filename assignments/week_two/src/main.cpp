#include "student.hpp"

int main(){

    std::string s1Name = "Grunt";
    std::string s1Email = "grunt@grorc.edu";
    std::string s1Subject = "Galactic Romanticism from the 3rd Big Bang";
    
    int s1Age = 219;
    size_t s1Id = 123456;
    float s1Balance = -400.300f;

    Student Student1 = Student (s1Name, s1Email, s1Subject, s1Age, s1Id, s1Balance);
    Student1.GetUserInfo();

    return 0;

}