/*********************************************************************
** Author: Kuljot Biring
**
** Date: June 15, 2018
**
** Write a program that calculates a car's gas mileage.
** This program should ask the user to enter the number of gallons of
** gas the car can hold & the number of miles it can be driven on
** a full tank. It should then calculate and display the number of
** miles per gallon the car gets.
*********************************************************************/

#include <iostream>
#include <iomanip>


int main()
{
    int numGallons, numMiles;
    double milesPerGallon;

    std::cout << "Please enter the number of gallons of your car's "
    "gas tank & press enter: \n";
    std::cin >> numGallons;

    std::cout  << "Please enter how many miles your car travels on a "
    "full tank & press enter: \n";
    std::cin >> numMiles;

    milesPerGallon = static_cast<double>(numMiles) / numGallons;
    std::cout << "Your car can do: " << std::fixed << std::showpoint
    << std::setprecision(1) << milesPerGallon << " MPG \n";

    return 0;
}
