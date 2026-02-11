/*
Program Name : PowerCalculator.cpp
Concept      : Using <cmath> Header File
Input        : Integer number
Output       : Square of number
Logic        : Use pow(number, 2)
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number;
    cout <<"Enter integer to square it: " <<endl;
    cin >> number;

    double result = pow(number,2);

    cout << "The square of the interger " << number << " is: " << result << endl;
    return 0;
}
