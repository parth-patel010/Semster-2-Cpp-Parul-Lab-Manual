//Practical:-13
/* Create a Class named as "EMPLOYEE", Declare Three Data Members ie.: eid,ename and e-salary and create two member
 functions of that class ie.: GetDetails() to get the input of all the datamembers and PrintDetails() to Display 
 all the details of the Employee. (note: create eid of int datatype, e-name is of char array data type and e-salary
 is of float data type */

/*
 ====EXPECTED OUTPUT=====
Employee id: 1
Employee name: Parth
Employee salary: 2532.11
*/

#include<iostream>

class EMPLOYEE{
    private:
        int id;
        std::string name;
        double salary;
    public:
        void GetDetails(int eid, std::string ename, double esalary){
            id = eid;
            name = ename;
            salary = esalary;
        }
        void PrintDetails(){
            std::cout << "Employee id: " << id << std::endl;
            std::cout << "Employee name: " << name << std::endl;
            std::cout << "Employee salary: " << salary << std::endl;
        }
};

int main(){
    EMPLOYEE employee1;
    employee1.GetDetails(1,"Parth",2532.11);
    employee1.PrintDetails();

    return 0;
}