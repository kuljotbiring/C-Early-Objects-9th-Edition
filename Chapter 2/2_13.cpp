/*********************************************************************
** Author: Kuljot Biring
**
** Date: June 3, 2018
**
** Challenge: A particular employee earns $39,000 annually. Write a 
** program that determines and displays what the amount of his gross
** pay will be for each pay period if he is paid twice a month (24 
** checks per year) and if he is paid bi-weekly.
*********************************************************************/

#include <iostream>
using namespace std;

int main()
{
    //Initialize and define variables
    int salary = 39000,
        twiceMonthly = salary / 24,
        twiceWeekly = salary / 26;

    //Display results
    cout << "The employee would receive a bi-montly salary of " << twiceMonthly << " and a bi-weekly salary of "
         << twiceWeekly << endl;
}
