/*********************************************************************
** Author: Kuljot Biring
**
** Date: June 16, 2018
**
** The Yukon Widget Company manufactures widgets that
** weight 12.5 pounds each. Write a program that calculates how many
** widgets are stacked on a pallet, based on the total weight of the
** pallet. The program should ask the user how much the pallet weighs
** by itself and with the widgets stacked on it. It should then
** calculate and display the number of widgets stacked on the pallet.
*********************************************************************/

#include <iostream>
#include <iomanip>

int main()
{
    const double WIDGETWEIGHT = 12.5;

    double totalWeight, palletWeight, numWidgets;

    std::cout << "What is the weight of an empty pallet \n";
    std::cin >> palletWeight;
    std::cout << "How much does the a pallet full of widgets weigh \n";
    std::cin >> totalWeight;

    numWidgets = (totalWeight - palletWeight) / WIDGETWEIGHT;

    std::cout << "You have a total of " << numWidgets
              << " widgets stacked on this pallet";

    return 0;
}
