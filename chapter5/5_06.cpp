/*********************************************************************
** Author: Kuljot Biring
**
** Date: July 6, 2018
**
** Assuming the Earth's oceans continue rising at about
** 3.1 millimeters per year, write a program that displays a table
** showing the total number of millimeters the oceans will have
** risen each year for the next 25 years.
*********************************************************************/

# include <iostream>
# include <iomanip>
using namespace std;

int main()
{
    const double WATER_RISE = 3.1;

    //Display results
    cout << "\n Year  Rise" << endl;
    cout << "--------------" << endl;

    for(int year = 1; year <=25; year++)
    {
        cout << setw(3) << year << "   " << fixed <<
        setw(5) << setprecision(2) << (year * WATER_RISE) << endl;
    }

    return 0;
}
