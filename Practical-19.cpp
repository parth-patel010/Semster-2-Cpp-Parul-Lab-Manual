//Practical-19
//Write a Program to show the use of Virtual Base Class. 

/*
====EXPECTED OUTPUT =====
Name: Parth
Marks: 40
Skills: c++
*/

// This is like call by refernerce it does not create 2 copies it just shared one.
/*
Without:
class A { public: int x; };
class B : public A {};
class C : public A {};
class D : public B, public C {};

int main() {
    D obj;
    obj.x = 5; // ❌ ERROR: which A?

With:
class A { public: int x; };
class B : virtual public A {};
class C : virtual public A {};
class D : public B, public C {};

int main() {
    D obj;
    obj.x = 5; // ✅ Only one A, no error
}

}
*/
#include <iostream>
using namespace std;

class person {
public:
    string name;
};

class student : virtual public person {
public:
    int marks;
};

class skillset : virtual public person {
public:
    string skill;
};

class TechStudent : public student, public skillset {
public:
    void Show() {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "Skills: " << skill << endl;
    }
};

int main() {
    TechStudent t;

  
    t.name = "Parth"; 
    t.marks = 40;
    t.skill = "C++";

    t.Show();
    return 0;
}
