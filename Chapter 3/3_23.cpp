/*********************************************************************
** Author: Kuljot Biring
**
** Date: June 16, 2018
**
** Modify the program you wrote in Challenge 22 so that it
** reports the number of pizzas you need to buy for a party if each
** person attending is expected to eat an average of four slices. The
** program should ask for the diameter of the pizzas to be ordered. It
** should then calculate and display the number of pizzas to purchase.
** Because it is impossible to buy a part of a pizza, the number of
** required pizzas should be displayed as a whole number.
*********************************************************************/

#include <iostream>
#include <cmath>

int main()
{
    // declare and define variables
    const double PI = 3.14;

    double pizzaArea{},
           sliceArea {14.125};

    int diameter {},
        radius {},
        numSlice {},
        buyPizza {},
        guests {};

    // get user input
    std::cout << "What is the diameter of the pizza?\n";
    std::cin >> diameter;
    std::cout << "How many guests will be at the party?\n";
    std::cin >> guests;

    // calculate results
    radius = diameter / 2;
    pizzaArea = PI * pow(radius, 2);
    numSlice = pizzaArea / sliceArea; // type demotion - full slices
    buyPizza = guests * 4 / numSlice;

    // display results
    std::cout << "You should order " << buyPizza << " pizzas of " << diameter
    << " diameter\n";

    return 0;
}
