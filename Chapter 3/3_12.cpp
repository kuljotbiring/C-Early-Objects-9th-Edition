/*********************************************************************
** Author: Kuljot Biring
**
** Date: June 16, 2018
**
** A bag of cookies holds 30 cookies. The calorie info
** on the bag claims that there are 10 servings and that one serving
** equals 240 calories. Write a program that asks the user to input
** how many cookies they ate and then reports how many total calories
** were consumed.
*********************************************************************/

#include <iostream>

int main()
{
    int calPerCookie = 240/3, numCookies, numCalories;

    std::cout << "How many cookies did you eat?\n";
    std::cin >> numCookies;

    numCalories = calPerCookie * numCookies;

    std::cout <<"After eating " << numCookies << " cookies you have consumed "
              << numCalories << " calories\n";

    return 0;
}
