/*********************************************************************
** Author: Kuljot Biring
**
** Date: June 15, 2018
**
** Description: Write a program that asks the user for the number of
** males and females registered in a class. The program should
** compute and report what percentage of the students are  male and
** what percentage are female. Display the output with two decimal
** points.
*********************************************************************/

#include <iostream>
#include <iomanip>

int main()
{
    int male, female, totalStudents;
    double malePercent, femalePercent;

    std::cout << "Enter the number of males in the class \n";
    std::cin >> male;
    std::cout << "Enter the number of females in the class \n";
    std::cin >> female;

    totalStudents = male + female;
    malePercent = static_cast<double>(male) / totalStudents * 100;
    femalePercent = static_cast<double>(female) / totalStudents * 100;

    std::cout << "The total percentage of males in the class is " << std::fixed
    << std::showpoint << std::setprecision(1) << malePercent << "%" << std::endl;

    std::cout << "The total percentage of females in the class is " << std::fixed
    << std::showpoint << std::setprecision(1) << femalePercent << "%" << std::endl;

    return 0;
}
