/*********************************************************************
** Author: Kuljot Biring
**
** Date: June 16, 2018
**
** Write a program that converts Celsius temp to
** Fahrenheit temp. The formula is F = (9/5)C + 32. The program
** should prompt the user to input a Celsius temp and should display
** the corresponding Fahrenheit temp.
*********************************************************************/
#include <iostream>
#include <iomanip>

int main()
{
    double  celsius, fahrenheit;

    std::cout << "Please enter the temperature (in Celsius) you want converted "
                 "to fahrenheit: \n";
    std::cin >> celsius;

    fahrenheit = (9.0 / 5) * celsius + 32;

    std::cout << "The temperature of " << celsius << " in celsius is: " << fahrenheit
              << " in fahrenheit \n";

    return 0;
}
