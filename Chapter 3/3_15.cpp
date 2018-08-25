/*********************************************************************
** Author: Kuljot Biring
**
** Date: June 16, 2018
**
** Description: Write a program that will convert U.S. dollar amounts
** to Japanese yen and to euros, storing the conversion factors in
** the constant variables YEN_PER_DOLLAR and EUROS_PER_DOLLAR.
*********************************************************************/

#include <iomanip>
#include <iostream>

int main()
{
    const double YEN_PER_DOLLAR = 110.68,
                 EURO_PER_DOLLAR = .86;
    int dollars;

    std::cout << "How many dollars would you like to convert? ";
    std::cin >> dollars;

    std::cout << std::fixed << std::showpoint << std::setprecision(2) << dollars
              << " is $" << dollars * YEN_PER_DOLLAR << " yen and "
         << dollars * EURO_PER_DOLLAR << " euros\n";

    return 0;
}
