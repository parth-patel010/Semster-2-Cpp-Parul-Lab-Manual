// Practical:-2
// Write a C++ program to generate all the prime numbers between 1 and n, where n is a value supplied by user.

/*
====EXPECTED OUTPUT=====
Enter n: 5
2 3 5 
*/

#include<iostream>
using namespace std;

int main(){
    int n,j,i,count;
    cout << "Enter n: " , cin >> n;
    for(i=2;i<=n;i++){
        count = 0;
            for(j=1;j<=i;j++){
                if(i%j==0){
                    count++;
                }
            }
        if(count == 2){
            cout << i << " ";
        }
    }
    return 0;
}

