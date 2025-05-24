// Practical:-4
// Write a program for recursive functions.
/*
====Expected Output====
Enter n: 5
120
*/

#include<iostream>
using namespace std;
int factorial(int);

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << factorial(n)
    return 0;
}

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}