/*********************************************************************
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
using namespace std;

int main() {

    // variables 
    double candy, cost, revenue;

    // Get the number of candy sold.
    cout << "How many candies did you sell?";
    cin >> candy;

    // Get cost of candy.
    cout << "What is the cost of the candy bar?";
    cin >> cost;

    // Calculate total revenue generated.
    revenue = candy * cost;

    // Display the total amount raised for the fundraiser.
     cout << "You have raised $" << revenue << endl;
     
return 0;
}

