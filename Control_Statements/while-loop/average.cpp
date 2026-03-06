/*
Program Name : print_numbers.cpp
Concept      : while loop
Input        : None
Output       : Numbers from 1 to 10
Logic        :
1. Initialize counter = 1
2. Check condition counter <= 10
3. Print counter
4. Increment counter
*/

#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    while (i <= 10)
    {
        cout << i << endl;
        i++;
    }

    return 0;
}
