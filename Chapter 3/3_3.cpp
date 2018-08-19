/*********************************************************************
** Author: Kuljot Biring
**
** Date: June 16, 2018
**
** Write a program that askes the user to enter their
** monthly costs for each of the following housing-related expenses:
** Rent, utilities, phone, and cable. The program should then display
** the total monthly cost of these expenses and the total annual cost
** of these expenses.
*********************************************************************/

#include <iostream>
#include <iomanip>


int main()
{
    double rent, utility, phone, cable, monthlyCost, yearlyCost;

    std::cout << "Please enter your monthly rent amount:\n";
    std::cin >> rent;
    std::cout << "Please enter your monthly utility amount:\n";
    std::cin >> utility;
    std::cout << "Please enter your monthly phone amount:\n";
    std::cin >> phone;
    std::cout << "Please enter your monthly cable amount:\n";
    std::cin >> cable;

    monthlyCost = rent + utility + phone + cable;
    yearlyCost = monthlyCost * 12;

    std::cout << "Your monthly cost for expenses is: $" << std::fixed
    << std::showpoint << std::setprecision(2) << monthlyCost << std::endl;
    std::cout << "Your yearly cost for expenses is: $" << std::fixed << std::showpoint
    << std::setprecision(2) << yearlyCost << std::endl;

    return 0;
}
