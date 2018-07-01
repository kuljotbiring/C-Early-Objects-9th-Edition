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
using namespace std;

int main()
{
    //Initialize and define variables
    double carTank = 16,
           carMiles = 312,
           milesPerGallon = carMiles / carTank;
    
    //Display results
    cout << "The car you are driving gives " << milesPerGallon << " mpg\n";
    return 0;
}
