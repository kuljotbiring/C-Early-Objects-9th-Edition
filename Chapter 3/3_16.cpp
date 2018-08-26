/*********************************************************************
** Author: Kuljot Biring
**
** Date: June 16, 2018
**
** A retail company must file a monthly sales tax report
** listing the sales for the month and the amount of sales tax
** collected. Write a program that asks for the month, the year, and
** the total amount collected at the cash register (that is, sales
** plus sales tax ). Assume the state sales tax is 4 percent and the
** county sales tax is 2 percent. If the total amount collected is
** known and the total sales tax is 6 percent, the amount of product
** sales may be calculated as S = T/1.06 where S is the product sales
** and T is the total income (product sales plus sales tax).
*********************************************************************/

#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string month,
           year,
           dashCount;

    double totalCollected,
           sales,
           countyTax,
           stateTax,
           totalTax;

    int dash;

    std::cout << "Enter the month for sales \n";
    std::cin >> month;
    std::cout << "Enter the year for sales \n";
    std::cin >> year;
    std::cout << "Enter the gross revenue collected for the period\n";
    std::cin >> totalCollected;

    sales = totalCollected / 1.06;
    countyTax = sales * .02;
    stateTax = sales * .04;
    totalTax = countyTax + stateTax;

    dash = month.length() + year.length();

    dashCount.assign(dash,'-');

    std::cout << "Month: " << month << " " << year << std::endl;

    std::cout << dashCount << std::endl;

    std::cout << "Total Collected: " << std::fixed << std::showpoint << std::setprecision(2)
              << std::setw(25) << totalCollected << std::endl;

    std::cout << "Sales: " << std::fixed << std::showpoint << std::setprecision(2)
              << std::setw(35) << sales << std::endl;

    std::cout << "County Sales Tax: " << std::fixed << std::showpoint << std::setprecision(2)
              << std::setw(25) << countyTax << std::endl;

    std::cout << "State Sales Tax: " << std::fixed << std::showpoint << std::setprecision(2)
              << std::setw(25) << stateTax << std::endl;

    std::cout << "Total Sales Tax: " << std::fixed << std::showpoint << std::setprecision(2)
              << std::setw(25) << totalTax << std::endl;

    return 0;
}
