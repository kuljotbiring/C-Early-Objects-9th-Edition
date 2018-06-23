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
// This program calculates how much a team spends on purchasing balls.

#include <iostream>
using namespace std;

int main() {

    int balls;
    double cost, purchase;

    // Get the cost of the balls.
    cout << "What was the price of each ball?";
    cin >> cost;

    // Get the number of balls bought.
    cout << "How many balls did you buy?";
    cin >> balls;

    // Calculate amount spent on balls.
    purchase = balls * cost;
    cout << "You have spent $" << purchase << " on balls" << endl;
    return 0;
}
