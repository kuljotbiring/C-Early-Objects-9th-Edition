/*********************************************************************
** Author: Kuljot Biring
**
** Date: June 16, 2018
**
** The monthly payment on a loan may be calculated by the
** following formula: Payment = (Rate * (1 + Rate)^N)/(1+Rate)^N-1
**    • Rate is the monthly interest rate, which is the annual
**      interest rate divided by 12. (A 12 percent annual interest
**      would be 1 percent monthly interest.)
**    • N is the number of payments • L is the amount of the loan.
** Write a program that asks for these values and displays a report
** to the user.
*********************************************************************/

#include <iomanip>
#include <iostream>
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
    double loanAmt {},
           intRate {},
           monthPay {},
           amtPdBack {},
           intPaid {};

    int numPaymt {};

    // prompt user
    cout << "Enter your loan amount\n";
    cin >> loanAmt;
    cout << "Enter the interest rate\n";
    cin >> intRate;
    cout << "Enter the number of payments to be made for your loan\n";
    cin >> numPaymt;

    intRate /= 100.0;

    // calculate results
    monthPay = ((intRate * pow(1 + intRate, numPaymt)) / (pow(1 + intRate, numPaymt) - 1)) * loanAmt;

    // display results
    cout << "Loan Amount:" << fixed << setprecision(2) << setw(16) << "$" << loanAmt << endl;
    cout << "Monthly interest rate:" << fixed << setprecision(2) << setw(14) << intRate << endl;
    cout << "Number of Payments:" << fixed << setprecision(2) << setw(15) << "$" <<  numPaymt << endl;
    cout << "Monthly Payment:"  << fixed << setprecision(2) << setw(14) << "$" <<  monthPay << endl;
    cout << "Amount paid back:" << fixed << setprecision(2) << setw(11) << "$" <<  monthPay * 36 << endl;
    cout << "Interest paid:" << fixed << setprecision(2) << setw(15) << "$" <<  monthPay * 36 - loanAmt << endl;

    return 0;

}
