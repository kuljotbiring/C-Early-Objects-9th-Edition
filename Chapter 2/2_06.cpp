/*********************************************************************
** Author: Kuljot Biring
**
** Date: June 2, 2018
**
** Challenge: A car with a 20 gallon gas tank averages 23.5 miles per
** gallon when driven in town and 28.9 miles per gallon when driven
** on the highway. Write a program that calculates and displays the
** number of miles the car can travel on one tank of gas when driven
** in town and on the highway.
*********************************************************************/

#include <iostream>


int main()
{
    double gasTank = 20,
           hwyMpg = 23.5,
           fwyMpg = 28.9,
           carTravelTown,
           carFwyTravel;

    carTravelTown = gasTank * hwyMpg;
    carFwyTravel = gasTank * fwyMpg;

    std::cout << "Your car travels " << carTravelTown << " in town and "
    << carFwyTravel << " on the freeway" << std::endl;

    return 0;
}
