/*********************************************************************
** Author: Kuljot Biring
**
** Date: June 16, 2018
**
** Assuming there are no deposits other than the original
** investment, the balance in a savings account after one year may
** be calculated as Amount = Principal * ( 1 + Rate/T)^T
**    • where Principal is the balance in the account
**    • Rate is the annual interest rate,
**    • T is the number of times the interest is compounded during a
**      year (e.g., T is 4 if the interest is compounded quarterly).
** Write a program that asks for the principal, the interest rate,
** and the number of times the interest is compounded, then reports
** the results including the final balance to the user
*********************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;
using std::showpoint;
using std::setw;

int main()
{
    // declare and initialize variables
    double interest {},
           principal {},
           compound {},
           balance {};

    // get user input
    cout << "Please enter the principal in your bank account:\n";
    cin >> principal;
    cout << "Enter the interest rate for your account:\n";
    cin >> interest;
    cout << "Enter the number of times your interest is compounded:\n";
    cin >> compound;

    // convert interest into decimal
    interest /= 100.00;

    // calculate results
    balance = principal * pow((1 + interest / compound), compound);

    std::cout << "Times Compounded:   " << setw(8) << compound << endl;
    std::cout << fixed << showpoint << setprecision(2);
    std::cout << "Principal:          " << "$" << setw(8) << principal << endl;
    std::cout << "Interest:           " << "$" << setw(8) << interest << endl;
    std::cout << "Final Balance:      " << "$" << setw(8) << balance << endl;

    return 0;
}
