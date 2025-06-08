//Practical:-14
// Write a Program to show the use of Function Overloading. 

/*
 ====EXPECTED OUTPUT=====
mushroom
Cheese
red chilly
*/

#include<iostream>

class Pizza{
    public:
         std::string toppings1;
         std::string toppings2;
         Pizza(){
             
         }
         Pizza(std::string toppings1){
            this->toppings1 = toppings1;
            } 
         Pizza(std::string toppings1, std::string toppings2){
            this->toppings1 = toppings1;
            this->toppings2 = toppings2;
            } 
         
};

int main(){
    Pizza pizza1("mushroom");
    Pizza pizza2("Cheese","red chilly");
    Pizza pizza3;
    std::cout << pizza1.toppings1 << std::endl;
    std::cout << pizza2.toppings1 << std::endl;   
    std::cout << pizza2.toppings2 << std::endl;
    return 0;
}