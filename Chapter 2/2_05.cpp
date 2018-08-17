/*********************************************************************
** Author: Kuljot Biring
**
** Date: June 2, 2018
**
** Challenge: A car holds 16 gallons of gasoline and can travel 312
** miles before refueling. Write a program that calculates the number
** of miles per gallon the car gets. Display the results on screen.
*********************************************************************/

#include <iostream>


int main()
{
    double carTank = 16,
           carMiles = 312,
           milesPerGallon = carMiles / carTank;

    std::cout << "The care you are driving gives " << milesPerGallon << " mpg\n";

    return 0;
}
