/*********************************************************************
** Author: Kuljot Biring
**
** Date: June 3, 2018
**
** In the United States land is often measured in square
** feet. In many other countries it is measured in meters. One acre
** of land is equivalent to 43,560 square feet. A square meter is
** equivalent to 10.7639 square feet. Write a program that computes
** and displays the number of square feet and the number of square
** meters in .5 acre of land.
*********************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int acreFeet = 43560,
        halfAcreFeet = acreFeet * .5;
    double acreMeter = 10.7639,
           halfAcreMeter = acreMeter * .5;

    cout << "A half acre has " << halfAcreFeet << " feet and " << halfAcreMeter << " meters.\n";
    
    return 0;
}
