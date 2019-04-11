/*********************************************************************
** Author: Kuljot Biring
**
** Date: July 06, 2018
**
** Write a program that displays a table of speeds in
** kilometers per hour with their values converted to miles per hour.
** The table should display the speeds from 40 kph through 120 kph,
** in increments of 10 kph.
*********************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double CONVERSION = 0.6214;

    cout << "\n KPH   MPH" << endl;
    cout << "--------------" << endl;

    for (int kph = 40; kph <= 120; kph+=10)
    {
        cout << setw(3) << kph << "     " <<
        fixed << showpoint << setprecision(2) << setw(5)
        << (kph * CONVERSION) << endl;
    }

    return 0;
}
