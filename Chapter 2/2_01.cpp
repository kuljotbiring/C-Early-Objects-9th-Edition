/*********************************************************************
** Author: Kuljot Biring
**
** Date: June 02, 2018
**
** Challenge: Write a program that stores the integers 50 and 100 in 
** variables and stores the sum of these two in a variable named 
** total. Display the total on the screen.
*********************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int fifty = 50,         // variables
    hundred = 100, total;
    
    total = fifty + hundred;

    cout << "The total of this program is " << total << endl;
    return 0;
}
