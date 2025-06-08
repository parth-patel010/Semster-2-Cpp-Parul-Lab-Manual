//Practical:-12
/*Create a Class named as "STUDENT", Create two data members of that class sid, smarks and
 Take two member Function of that class ie. GetData() to get the value of datamember and ShowData() 
 to Display the value of Datamembers and call that function from the main function. */

/*
 ====EXPECTED OUTPUT=====
Student ID: 1
Name: Parth
Marks: 40
*/

#include <iostream>


class Student {
private:
    int id;
    std::string name;
    int marks;

public:
    void GetData(int sid, std::string sname, int smarks) {
        id = sid;
        name = sname;
        marks = smarks;
    }

    void ShowData() {
        std::cout << "Student ID: " << id << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Marks: " << marks << std::endl;
    }
};

int main() {
    Student student1;
    student1.GetData(1, "Parth", 40);
    student1.ShowData();

    return 0;
}
