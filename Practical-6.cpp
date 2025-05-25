// Practical:-6
// Write a C++ Program to take two values from the user side and perform all kinds of Arithmetic Operation. 
/*
====Expected Output====
Enter the a: 10
Enter the b: 20
a + b = 30
a - b = -10
a * b = 200
a / b = 0
a % b = 10
a ** b = 1e+20
*/

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c;
    cout << "Enter the a: ";
    cin >> a;
    cout << "Enter the b: ";
    cin >> b;
    cout << "a + b = ",cout << a+b << "\n";
    cout << "a - b = ",cout << a-b << "\n";
    cout << "a * b = ",cout << a*b << "\n";
    cout << "a / b = ",cout << a/b << "\n";
    cout << "a % b = ",cout << a%b << "\n";
    cout << "a ** b = ",cout << pow(a,b);
}