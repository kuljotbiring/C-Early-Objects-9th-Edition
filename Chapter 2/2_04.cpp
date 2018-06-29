/*********************************************************************
** Author: Kuljot Biring
**
** Date: February 6, 2017
**
** Challenge: Write a program that computes the tax and tip on a 
** restaurant bill for a patron with a $44.50 meal charge. The tax 
** should be 6.75 percent of the meal cost. The tip should be 15
** percent of the total after adding the tax. Display the meal cost,
** tax amount, tip amount, and total bill on the screen.
*********************************************************************/

#include <iostream>
using namespace std;

int main()
{
    double mealCharge = 44.50,
           yourTax = .0675 * mealCharge,
           yourTip = .15 * (yourTax + mealCharge),
           yourTotal = mealCharge + yourTax + yourTip;

    cout << "Your meal cost is " << mealCharge << endl;
    cout << "Your tax for the meal is " << yourTax << endl;
    cout << "Your tip is " << yourTip << endl;
    cout << "The total amount due is " << yourTotal << endl;

    return 0;
}
