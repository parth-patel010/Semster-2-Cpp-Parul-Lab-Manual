// Practical:-3
// Write a C++ Program to generate first n terms of Fibonacci sequence. 
/*
====Expected Output====
Enter n: 5
1 1 2 3 5 8
*/

#include<iostream>
using namespace std;
int Fibonacci(int);
int main(){
    int n;
    cout << "Enter the n: ", cin >> n;
    for(int i=0;i<n;i++){
        cout << Fibonacci(i) << " ";
    }
    return 0;
}

int Fibonacci(int n){
    if(n==1 || n==0){
        return 1;
    }
    else{
        return Fibonacci(n-1)+Fibonacci(n-2);
    }
}
