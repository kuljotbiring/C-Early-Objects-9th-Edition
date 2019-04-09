/*********************************************************************
** Author: Kuljot Biring
**
** Date: July 06, 2018
**
** Write a program that uses a loop to display a table of
** the Celsius temperatures from 0 to 30 and their Fahrenheit
** equivalents.
*********************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    double fahrenheit;


    cout << "\nCelsius     Fahrenheit" << endl;
    cout << "-----------------------" << endl;

    for(double celsius = 0.0; celsius <= 30.0; celsius++)
    {
        fahrenheit = (static_cast<double>(9) / 5) * celsius + 32;
        cout << celsius << "            " << fahrenheit << endl;
    }

    return 0;
}
