// Practical-11
// Write a Program to show the use of Inline Function. 
/*
====EXPECTED OUTPUT=====
The Square of 5 is 25
*/

#include<iostream>

int sqauare(int x){
    return x*x;
}

int main(){
    int x;
    std::cout << "The Square of 5 is " << sqauare(5);
    return 0;
}