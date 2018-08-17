/*********************************************************************
** Author: Kuljot Biring
**
** Date: June 3, 2018
**
** Challenge: One acre of land is equivalent to 43,450 square feet.
** Write a program that calculates and displays the number of acres
** in a tract of land whose size is 869 X 360 feet.
*********************************************************************/

#include <iostream>


int main()
{
    int acreFeet = 43560,
        halfAcreFeet = acreFeet * .5;
    double acreMeter = 10.7639,
           halfAcreMeter = acreMeter * .5;

    std::cout << "A half acre has " << halfAcreFeet << " feet and "
    << halfAcreMeter << " meters.\n";

    return 0;
}
