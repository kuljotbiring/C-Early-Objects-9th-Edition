/*********************************************************************
** Author: Kuljot Biring
**
** Date: July 7, 2018
**
** Write a program that calculates how much a person earns
** in a month if the salary is one penny the first day, two pennies
** the second day, four pennies the third day, and so on with the
** daily pay doubling each day the employee works. The program should
** ask the user for the number of days the employee worked during
** the month, validate that it is between 1 and 31, and then display
** a table showing how much the salary was for each day worked, as
** well as the total pay earned for the month. The output should be
** displayed in dollars with two decimal points, not in pennies.
*********************************************************************/

#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::fixed;
using std::setprecision;
using std::showpoint;

int main()
{
    //Declare variable
    int days;
    double total,
            penny = .01;

    //Get and validate user input
    do
    {
        cout << "Enter days worked this month: ";
        cin >> days;
    }while(days < 1 || days > 31);

    //Generate and display results
    cout  << "\n " << "Day     Daily Pay          Total" << endl;
    cout  << " " << "-----------------------------------" << endl;

    for (int i = 1; i <= days; ++i)
    {
        total += penny; //Increase total

        //Display two decimal places
        cout << fixed << showpoint << setprecision(2);
        cout << setw(3) << i << setw(5) << "$" << setw(11) << penny
             << setw(6) << "$" << setw(11) << total << endl;

        penny *= 2; //Increment penny
    }
    return 0;
}
