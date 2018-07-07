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
using namespace std;

int main()
{
    int acreSqft = 43450,
        areaPlot = 869 * 360,
        yourLand = areaPlot / acreSqft;

    cout << "Your tract of land is " << yourLand << " acres\n";
    return 0;
}
