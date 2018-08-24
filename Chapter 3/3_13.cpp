/*********************************************************************
** Author: Kuljot Biring
**
** Date: June 16, 2018
**
** A cookie recipe calls for the following ingredients:
**       *1.5 cups sugar
**       *1 cup butter
**       *2.75 cups flour
** The recipe produces 48 cookies with these amounts of ingredients.
** Write a program that asks the user how many cookies he or she
** wants and then displays the number of cups of each ingredient
** needed for the specified number of cookies.
*********************************************************************/

#include <iostream>
#include <iomanip>

int main()
{
    double cupsSugar = 1.5 / 48,
           cupButter = 1.0 / 48,
           cupFlour = 2.75 / 48,
           totalSugar,
           totalButter,
           totalFlour;

    int    numCookies;

    std::cout << "How many cookies would you like to make? \n";
    std::cin >> numCookies;

    totalSugar = numCookies * cupsSugar;
    totalButter = numCookies * cupButter;
    totalFlour = numCookies * cupFlour;

    std::cout << "To make " << std::fixed << std::showpoint << std::setprecision(2)
              << numCookies << " cookies, your ingredients are: "
            << totalSugar << " cups of sugar, " << totalButter << " cups of butter and "
            << totalFlour << " cups of flour\n";

    return 0;
}
