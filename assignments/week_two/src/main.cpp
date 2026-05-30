#include "course.hpp"
#include "student.hpp"

int main(){
    //student 1
    std::string s1Name = "Grunt";
    std::string s1Email = "grunt@grorc.edu";
    std::string s1Subject = "Galactic Romanticism from the 3rd Big Bang";
    
    int s1Age = 219;
    size_t s1Id = 123456;
    float s1Balance = -400.300f;

    Student Student1 = Student (s1Name, s1Email, s1Subject, s1Age, s1Id, s1Balance);
    Student1.GetUserInfo();

    //Course 1
    int c1Cap = 25;

    std::string c1CourseName = "Galactic Romanticism from the 3rd Big Bang";
    std::string c1CourseDescription = "Explore and Examine the 3rd wave of Galactic Romanticism from the 3rd birth of the Cosmos";

   Course Course1 = Course (c1Cap, c1CourseName, c1CourseDescription);
   Course1.GetCourseInfo();

    return 0;

}