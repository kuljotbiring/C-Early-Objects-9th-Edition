/*********************************************************************
** Author: Kuljot Biring
**
** Date: June 3, 2018
**
** An electronics company makes circuit boards that cost
** $14.95 apiece to produce. Write a program to determine how much
** the company should sell them for if it wants to make a 35 percent
** profit. Display results on the screen.
*********************************************************************/

#include <iostream>


int main()
{
    double basis = 14.95,
           sale = (basis * .35) + basis;

    std::cout << "The company should sell the unit for " << sale << std::endl;

    return 0;
}
