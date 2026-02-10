/*
Program Name : NoArgumentFunction.cpp
Concept      : Function without arguments
Input        : None
Output       : Fixed number
Logic        : Function returns constant
*/

#include <iostream>

using namespace std;

int getNumber();

int main() {


    cout << getNumber();

    return 0;
}

int getNumber(){

    return 10;

}
