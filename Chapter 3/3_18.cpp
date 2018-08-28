/*********************************************************************
** Author: Kuljot Biring
**
** Date: June 16, 2018
**
** Madison County collects property taxes on the assessed
** value of property, which is 60 percent of its actual value. For
** example, if a house is valued at $158,000, its assessed value is
** $94,800. This is the amount the homeowner pays tax on. At last
** year's tax rate of $2.64 for each $100 of assessed value, the
** annual property tax for this house would be $2502.72. Write a
** program that asks the user to input the actual value of a piece of
** property and the current tax rate for each $100 of assessed value.
** The program should then calculate and report how much annual
** property tax the homeowner will be charged for this property
*********************************************************************/

#include <iomanip>
#include <iostream>

int main ()
{
    // define variables
    const double TAX_RATE = .0264;

    double propertyValue,
           taxValue,
           totalTax;

    // get user input
    std::cout << "Please enter the total assessed value of your home\n";
    std::cin >> propertyValue;

    // calculate results
    taxValue = propertyValue * .6;
    totalTax = taxValue * TAX_RATE;

    // display results
    std::cout << "The total tax you will pay on the assessed value of your home of $"
              << std::fixed << std::showpoint << std::setprecision(2)
              << propertyValue << " is $" << totalTax << std::endl;

    return 0;
}
