/*********************************************************************
** Author: Kuljot Biring
**
** Date: June 2, 2018
**
** Challenge: The East Coast sales division of a company generates 58
** percent of total sales. Based on that percentage, write a program
** that will predict how much the East Coast division will generate
** if the company has $8.6 million in sales this year. Display the
** result on the screen.
*********************************************************************/

#include <iostream>
using namespace std;

int main()
{
    double eastCoast = .58,
        totalSales = 8600000;
        
    // Calculate East Coast division revenue
    int easternSales = totalSales * eastCoast;
    
    // Display East Coast division revenue
    cout << "The sales generated by the East Coast are " << easternSales << endl;
    
    return 0;
}
