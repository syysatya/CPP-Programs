/*
Program Name : LocalGlobalDemo.cpp
Concept      : Local and Global Variables
Input        : None
Output       : Displays variable values
Logic        : Use one global and one local variable
*/
#include <iostream>
using namespace std;

int globalVar = 10;   // Global variable

int main() {
    int localVar = 5;   // Local variable

    cout << "Global Variable: " << globalVar << endl;
    cout << "Local Variable: " << localVar << endl;

    return 0;
}
