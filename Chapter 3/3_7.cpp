/*********************************************************************
** Author: Kuljot Biring
**
** Date: June 15, 2018
**
** Write a program that calculates the average monthly
** rainfall for three months. The program should ask the user to
** enter the name of each month and the amount of rain that fell
** that month. The program should display the results.
*********************************************************************/

#include <iostream>
#include <iomanip>
#include <string>

int main()
{
   std::string  month1, month2, month3;

   double rain1, rain2, rain3, aveRain;

   std::cout << "Enter the first month\n";
   std::cin >> month1;
   std::cout << "Enter the amount of rain (in inches) that fell for the month " << month1 << std::endl;
   std::cin >> rain1;
   std::cout << "Enter the second month\n";
   std::cin >> month2;
   std::cout << "Enter the amount of rain (in inches) that fell for " << month2 << std::endl;
   std::cin >> rain2;
   std::cout << "Enter the third month\n";
   std::cin >> month3;
   std::cout << "Enter the amount of rain (in inches) that fell for " << month3 << std::endl;
   std::cin >> rain3;

   aveRain = (rain1 + rain2 + rain3) / 3;

   std::cout << "The average rain that fell for " << month1 << " " << month2 << " and " << month3
   << " was " << std::fixed << std::showpoint << std::setprecision(2) << aveRain << " inches\n";

    return 0;
}
