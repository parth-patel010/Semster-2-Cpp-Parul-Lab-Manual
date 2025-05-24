// Practical:-5
// Write a C++ program to find both the largest and smallest number in a list of integers. 
/*
====Expected Output====
30 10
*/

#include<iostream>
using namespace std;

int main() {
    int arr[15] = {10214, 24414, 4314, 3145, 31413, 431345, 3151513, 531531, 31431, 43145135, 31134134, 1341334, 431431, 314315, 13141};
    int maxNum = arr[0];
    int minNum = arr[0];

    for (int i = 1; i < 15; i++) {
        if (arr[i] > maxNum)
            maxNum = arr[i];
        if (arr[i] < minNum)
            minNum = arr[i];
    }

    cout << maxNum << " " << minNum << endl;
    return 0;
}
