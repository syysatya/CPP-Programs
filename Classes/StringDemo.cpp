/*
Program Name : StringDemo.cpp
Concept      : Using string class
Input        : User name
Output       : Greeting message
Logic        : Store and display string
*/

#include <iostream>
#include<cmath>
using namespace std;

int main() {

    string name;

    cout << "Enter your name:" <<  endl;
    cin >> name;

    cout << "Hello, " << name;

    return 0;
}

