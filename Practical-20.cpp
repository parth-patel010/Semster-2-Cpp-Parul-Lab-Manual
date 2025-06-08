//Practical:-20
// Write a Program to show the use of a Default Constructor. 

/*
====EXPECTED OUTPUT =====
Parth
3A
9.56
*/

#include<iostream>

class Student{
    public:
        std::string name;
        std::string Class;
        double gpa;
    Student(std::string name,std::string Class,double gpa){
            this->name = name;
            this->Class = Class;
            this->gpa = gpa;
    }
};

int main(){
    Student student1("Parth","3A",9.56);
    std::cout << student1.name << std::endl;
    std::cout << student1.Class << std::endl;
    std::cout << student1.gpa << std::endl;
    return 0;
}