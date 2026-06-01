#include "course.hpp"
#include "student.hpp"
#include "school.hpp"

int main(){
    //student 1
    std::string s1Name = "Grunt";
    std::string s1Email = "grunt@agu.edu";
    
    int s1Age = 219;
    size_t s1ID = 123456;
    float s1Balance = -400.300f;

    Student Student1 = Student (s1Name, s1Email, s1Age, s1ID, s1Balance);
    Student1.GetUserInfo();

    //Course 1
    int c1Cap = 25;

    std::string c1CourseName = "Galactic Romanticism from the 3rd Big Bang";
    std::string c1CourseDescription = "Explore and Examine the 3rd wave of Galactic Romanticism from the 3rd birth of the Cosmos";

    Course Course1 = Course (c1Cap, c1CourseName, c1CourseDescription);
    Course1.GetCourseInfo();

    //School 1
    size_t schoolID = 1231234832910;
    std::string schoolName = "Andromeda Galaxy University";
    int schoolEstablished = 1789;

    std::unordered_map<std::string, Student*> newStudents;

    School School1 = School (schoolID, schoolName, schoolEstablished, newStudents);
    School1.GetSchoolInfo();

    std::string s1Name_to_add = "Grunt";
    //std::string s2Name_to_add = "Chort";
    //std::string s3Name_to_add = "Glorp";

    School1.AddStudent(s1Name_to_add, &Student1);
    //School1.AddStudent(s2Name_to_add, &Student2);
    //School1.AddStudent(s3Name_to_add, &Student3);

    return 0;

}