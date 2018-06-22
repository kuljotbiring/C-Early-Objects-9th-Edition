
Skip to content

    Pull requests
    Issues
    Marketplace
    Explore

    @kuljotbiring

0
0

    0

kuljotbiring/C-Early-Objects-9th-Edition
Code
Issues 0
Pull requests 0
Projects 0
Wiki
Insights
Settings
C-Early-Objects-9th-Edition/Ch1_01.cpp
09d3569 a minute ago
@kuljotbiring kuljotbiring Create Ch1_01.cpp
35 lines (27 sloc) 1004 Bytes
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

    double candy, cost, revenue;

    // Get the cost of the candy.
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

    © 2018 GitHub, Inc.
    Terms
    Privacy
    Security
    Status
    Help

    Contact GitHub
    API
    Training
    Shop
    Blog
    About

Press h to open a hovercard with more details.
