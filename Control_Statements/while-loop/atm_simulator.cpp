/*
Program Name : atm_simulator.cpp
Concept      : menu driven program using while loop
Input        : user choices
Output       : banking operations
Logic        :
1. Start with initial balance
2. Show menu repeatedly
3. Perform operation based on choice
*/

#include <iostream>
using namespace std;

int main()
{
    int choice = 0;
    double balance = 1000;

    while (choice != 4)
    {
        cout << "\n1.Check Balance\n2.Deposit\n3.Withdraw\n4.Exit\n";
        cout << "Choice: ";
        cin >> choice;

        if (choice == 1)
            cout << "Balance: " << balance << endl;

        else if (choice == 2)
        {
            double amount;
            cout << "Deposit amount: ";
            cin >> amount;
            balance += amount;
        }

        else if (choice == 3)
        {
            double amount;
            cout << "Withdraw amount: ";
            cin >> amount;

            if (amount <= balance)
                balance -= amount;
            else
                cout << "Insufficient balance." << endl;
        }
    }

    return 0;
}
