/*********************************************************************
** Author: Kuljot Biring
**
** Date: June 3, 2018
**
** Challenge: The star player of a high school basketball team is 74
** inches tall. Write a program to compute and display the height in 
** feet/inches form.
*********************************************************************/

#include <iostream>
using namespace std;

int main()
{
    //Initialize and define variables
    int playerHeight = 74,
            playerFeet = playerHeight / 12,
            playerInches = playerHeight % 12;

    //Display results
    cout << "The basketball players height is: " << playerFeet << "\' ";
    cout << playerInches << "\"" << endl;

    return 0;
}
