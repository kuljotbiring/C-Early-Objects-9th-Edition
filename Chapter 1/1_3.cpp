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
using namespace std;

int main() {

    double soil, seeds, fence, totalCost;

    // Get the cost of the soil spent.
    cout << "How much did you spend on soil?";
    cin >> soil;

    // Get the cost of flower seeds.
    cout << "How much did you spend on flower seeds?";
    cin >> seeds;

    // Get the cost of the fence.
    cout << "How much did the fencing cost";
    cin >> fence;

    // Calculate the total cost for the flower garden.
    totalCost = soil + seeds + fence;
    cout << "The total cost of your flower garden display is: $" << totalCost << endl;

    return 0;
}
