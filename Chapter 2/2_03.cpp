/*********************************************************************
** Author: Kuljot Biring
**
** Date: June 6, 2018
**
** Challenge: Write a program that computes the sales tax on a $95
** purchase. Assume the state sales tax is 6.5 percent and the county
** sales tax is 2 percent. Display the purchase price, state tax,
** county tax, and total amounts on the screen.
*********************************************************************/

#include <iostream>


int main() {
    int purchase = 95,
            totalPurchase;
    double countyTax = purchase * .02,
            stateTax = purchase * .065,
            totalPrice = purchase + countyTax + stateTax;

    std::cout << "Your item costs " << purchase << " with the state tax at " << stateTax
         << " and the county tax at " << countyTax << " making your total " << totalPrice << std::endl;

    return 0;
}
