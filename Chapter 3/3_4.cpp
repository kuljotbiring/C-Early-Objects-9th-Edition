/*********************************************************************
** Author: Kuljot Biring
**
** Date: June 15, 2018
**
** Many financial experts advise property owners to
** insure their homes or buildings for at least 80 percent of the
** amount it would cost to replace the structure. Write a program
** that asks the user to enter the replacement cost of a building
** and then displays the minimum amount of insurance that should be
** purchased for the property.
*********************************************************************/
#include <iostream>
#include <iomanip>


int main()
{
    double replacement, insurance;

    std::cout << "Enter the cost it would take to replace your building:\n";
    std::cin >> replacement;

    insurance = replacement * .80;

    std::cout << "You should buy insurance that covers $" << std::fixed
    << std::showpoint << std::setprecision(2) << insurance <<
    " of your replacement total.\n";

    return 0;
}
