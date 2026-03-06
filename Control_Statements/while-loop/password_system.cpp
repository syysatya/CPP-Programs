/*
Program Name : password_system.cpp
Concept      : while loop authentication
Input        : Password
Output       : Access granted / denied
Logic        :
1. Store correct password
2. Allow maximum 3 attempts
3. Stop when correct or attempts exhausted
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string password = "admin123";
    string input;
    int attempts = 0;

    while (attempts < 3)
    {
        cout << "Enter password: ";
        cin >> input;

        if (input == password)
        {
            cout << "Access Granted!" << endl;
            return 0;
        }

        attempts++;
        cout << "Wrong password." << endl;
    }

    cout << "Account Locked." << endl;

    return 0;
}
