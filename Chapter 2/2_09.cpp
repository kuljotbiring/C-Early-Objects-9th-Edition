/*********************************************************************
** Author: Kendal Droddy
**
** Date: June 3, 2018
**
** Challenge: An electronics company makes circuit boards that cost
** $14.95 apiece to produce. Write a program to determine how much 
** the company should sell them for if it wants to make a 35 percent
** profit. Display results on the screen.
*********************************************************************/

#include <iostream>
using namespace std;

int main()
{
    //Initialize and define variables
    const double BASIS = 14.95;
    
    double
           sale = (BASIS * .35) + BASIS;

    //Display results
    cout << "The company should sell the unit for " << sale << endl;
    return 0;
}
