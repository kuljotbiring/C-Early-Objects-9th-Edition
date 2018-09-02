//
// Created by Kuljot Singh Biring on 6/16/18.
//
//
// Created by Kuljot Singh Biring on 6/16/18.
//
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    const double PI = 3.14;
    double pizzaArea, sliceArea = 14.125;
    int diameter, radius, numSlice, buyPizza, guests;

    cout << "What is the diameter of the pizza?\n";
    cin >> diameter;
    cout << "How many guests will be at the party?\n";
    cin >> guests;

    radius = diameter / 2;

    pizzaArea = PI * pow(radius, 2);

    numSlice = pizzaArea / sliceArea;

    buyPizza = guests * 4 / numSlice;

    cout << "You should order " << buyPizza << " pizzas of " << diameter << " diameter\n";

    return 0;
}
