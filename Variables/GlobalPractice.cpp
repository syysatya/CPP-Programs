/*
Program Name : GlobalPractice.cpp
Concept      : Global Variable Usage
Input        : None
Output       : Updated count value
Logic        : Modify global variable inside function
*/
#include <iostream>
using namespace std;

int count = 0;   // global variable

void increment() {
    count++;
}

int main() {
    increment();
    increment();

    cout << "Count = " << count << endl;
    return 0;
}
