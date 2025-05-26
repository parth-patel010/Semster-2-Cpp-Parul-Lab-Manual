// Practical:-7
// Write a C++ program to sort a list of numbers in ascending order.
/*
====Expected Output====
Sorted list in ascending order: 10 20 30 30 50 
*/



#include<iostream>
using namespace std;

int main() {
    int l1[5] = {20, 30, 10, 50, 30};
    

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (l1[i] > l1[j]) {
                int temp = l1[i];
                l1[i] = l1[j];
                l1[j] = temp;
            }
        }
    }

    cout << "Sorted list in ascending order: ";
    for (int i = 0; i < 5; i++) {
        cout << l1[i] << " ";
    }
    cout << endl;

    return 0;
}
