// Practical-15
// Write a Program to show the use of single level inheritance.

/*
====EXPECTED OUTPUT=====
Is the dog alive? Yes
Dog says: woof!
*/

#include <iostream>

class Animal {
public:
    bool is_alive = true;
};

class Dog : public Animal {
public:
    void bark() {
        std::cout << "Dog says: woof!" << std::endl;
    }
};

int main() {
    Dog dog;

    std::cout << "Is the dog alive? " << (dog.is_alive ? "Yes" : "No") << std::endl;
    dog.bark();

    return 0;
}
