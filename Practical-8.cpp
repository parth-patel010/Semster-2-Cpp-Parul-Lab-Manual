// Practical:-8
// Write a program to check Given Number is Even or Odd Using if-else in C++.

/*
====EXPECTED OUTPUT=====
Enter n: 5
odd
*/

#include<iostream>

using namespace std;
int main(){
    int n;
    cout << "Enter n: " , cin >> n;
    if(n<0){
        cout << "Enter More than 0";
    }
    else if(n%2==0) {
        cout << "even";
    }
    else {
        cout << "odd";
    }

    return 0;
}