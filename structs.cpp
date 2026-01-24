#include <iostream>

struct student{
    std::string name;
    int age;
    bool enrolled;
};

int main(){
    student student1;
    student1.name = "Syeme";
    student1.age = 67;
    student1.enrolled = true;

    std::cout << "Name : " << student1.name << "\nAge: " << student1.age << "\nEnrolled: " << student1.enrolled << '\n';

    return 0;
}