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


int main()
{
    int acreSqft = 43450,
        areaPlot = 869 * 360,
        yourLand = areaPlot / acreSqft;

    std::cout << "Your tract of land is " << yourLand << " acres\n";

    return 0;
}
