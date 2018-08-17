/*********************************************************************
** Author: Kuljot Biring
**
** Date: May 28, 2018
**
** Challenge: Write a program that calculates how much a garden center
** spent to make a flower garden display. The program should prompt
** the user to enter the cost of the soil, the flower seeds, and the
** fence. It should then calculate and display the total amount spent.
*********************************************************************/

#include <iostream>


int main() {

    double soil, seeds, fence, totalCost;

    // Get the cost of the soil spent.
    std::cout << "How much did you spend on soil? ";
    std::cin >> soil;

    // Get the cost of flower seeds.
    std::cout << "How much did you spend on flower seeds? ";
    std::cin >> seeds;

    // Get the cost of the fence.
    std::cout << "How much did the fencing cost? ";
    std::cin >> fence;

    // Calculate the total cost for the flower garden.
    totalCost = soil + seeds + fence;
    std::cout << "The total cost of your flower garden display is: $" << totalCost << std::endl;

    return 0;
}
