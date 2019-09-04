/**********************************************************************
** Author: Kuljot Biring
**
** Date: May 28, 2018
**
** Challenge: Write a program that calculates how much a student
** organization earns during its fund-raising candy sale. The program
** should prompt the user to enter the number of candy bars sold and
** the amount the organization earns for each bar sold. It should
** then calculate and display the total amount earned.
*********************************************************************/

#include <iostream>

int main() {

    double candy {},
           cost {},
           revenue {};

    // Get the cost of the candy.
    std::cout << "How many candies did you sell? ";
    std::cin >> candy;

    // Get cost of candy.
    std::cout << "What is the cost of the candy bar? ";
    std::cin >> cost;

    // Calculate total revenue generated.
    revenue = candy * cost;

    // Display the total amount raised for the fundraiser.
    std::cout << "You have raised $" << revenue << std::endl;
     
return 0;

}
