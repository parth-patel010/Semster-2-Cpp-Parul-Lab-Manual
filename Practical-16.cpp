//Practical:-16;
//Write a Program to show the use of multilevel inheritance 

/*
====EXPECTED OUTPUT=====
cat says: meow!
is cat alive: yes
*/

#include<iostream>

class Animal{
    public:
        bool is_alive = true;
};
class Dog : public Animal{
    public:
        bool eating = true;
        void Say(){
        std::cout << "woof!" << std::endl;
        }
};
class Cat : public Dog {
    public:
        bool eating = true;
        void Say(){
        std::cout << "meow!" << std::endl;
     }
};

int main(){
    Cat cat;
    std::cout << "cat says: ";
    cat.Say();
    std::cout << "is cat alive: ";
    std::cout << (cat.is_alive ? "yes" : "no");
}