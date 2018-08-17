/*********************************************************************
** Author: Kuljot Biring
**
** Date: May 28, 2018
**
** Challenge: Write a program that calculates how much a Little
** League baseball team spent last year to purchase new baseballs.
** The program should prompt the user to enter the number of
** baseballs purchased and the cost of each baseball. It should then
** calculate and display the total amount spent to purchase them.
*********************************************************************/

#include <iostream>


int main()

{

    int balls;
    double cost, purchase;

    // Get the cost of the balls.
    std::cout << "What was the price of each ball? ";
    std::cin >> cost;

    // Get the number of balls bought.
    std::cout << "How many balls did you buy? ";
    std::cin >> balls;

    // Calculate amount spent on balls.
    purchase = balls * cost;
    std::cout << "You have spent $" << purchase << " on balls" << std::endl;

    return 0;
}
