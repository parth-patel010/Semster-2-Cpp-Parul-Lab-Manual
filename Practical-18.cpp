//Practical:-18
//Write a Program to show the use of Hybrid inheritance.

/*
====EXPECTED OUTPUT 1=====
Name: Parth
marks: 40
skills: cpp
*/

/*
====EXPECTED OUTPUT 2=====
Name: Parth
Marks: 40
Skills: C++
*/

// There are two types of Hybrid inheritance
// 1. Multilevel + Multiple
// 2. Hierarchical + Multiple

// Multilevel + Multiple

#include<iostream>

class Person{
    public:
        std::string name;
};

class student : public Person{
    public:
        int marks;
};

class skills{
    public:
        std::string skills;
};

class TechStudent : public student, public skills{
    public:
        void Show(){
        std::cout << "Name: " << name << std::endl;
        std::cout << "marks: " << marks << std::endl;
        std::cout << "skills: " << skills << std::endl;
        }
};

int main(){
    TechStudent t;
    t.name = "Parth";
    t.marks = 40;
    t.skills = "cpp";
    t.Show();
}

// Hierarchical + Multiple

#include <iostream>
using namespace std;

class person {
public:
    string name;
};

class student : public person {
public:
    int marks;
};

class skillset : public person {
public:
    string skill;
};

class TechStudent : public student, public skillset {
public:
    void Show() {
        cout << "Name: " << student::name << endl;
        cout << "Marks: " << marks << endl;
        cout << "Skills: " << skill << endl;
    }
};

int main() {
    TechStudent t;

  
    t.student::name = "Parth"; 
    t.marks = 40;
    t.skill = "C++";

    t.Show();
    return 0;
}
