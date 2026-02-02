/*
Program Name : Check Even or Odd
Concept      : if-else statement
Input        : An integer number
Output       : Even or Odd
Logic        : If n % 2 == 0 → Even, else → Odd
*/

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter an integer to check Even or Odd: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "The number " << n << " is an Even number." << endl;
    } else {
        cout << "The number " << n << " is an Odd number." << endl;
    }

    return 0;
}
