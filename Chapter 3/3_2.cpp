/*********************************************************************
** Author: Kuljot Biring
**
** Date: June 16, 2018
**
** There are three seating categories at a stadium. For
** a softball game, Class A seats cost $15, Class B seats cost $12,
** and Class C seats cost $9. Write a program that asks how many
** tickets for each class of seats were sold, then displays the amount
** of income generated from ticket sales. Format your dollar amount
** in a fixed-point notation with two decimal points and make sure
** the decimal point is always displayed.
*********************************************************************/

#include <iostream>
#include <iomanip>


int main()
{
    const int classA = 15, classB = 12, classC = 9;
          double  totalA, totalB, totalC, grandTotal;
          int numSoldA, numSoldB, numSoldC;

    std::cout << "Enter the total number of class A tickets sold: \n";
    std::cin >> numSoldA;
    totalA = numSoldA * classA;

    std::cout << "Enter the total number of class B tickets sold: \n";
    std::cin >> numSoldB;
    totalB = numSoldB * classB;

    std::cout << "Enter the total number of class C tickets sold: \n";
    std::cin >> numSoldC;
    totalC = numSoldC * classC;

    grandTotal = totalA + totalB + totalC;

    std::cout << "Your total revenue from ticket sales is: $" << std::fixed
    << std::showpoint << std::setprecision(2) << grandTotal;

    return 0;
 }
