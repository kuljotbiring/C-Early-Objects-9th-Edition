/*********************************************************************
** Author: Kuljot Biring
**
** Date: July 06, 2018
**
** Write a program that asks the user for a positive
** integer value and that uses a loop to validate the input.
** The program should then use a second loop to compute the sum
** of all the integers from 1 up to the number entered. For example,
** if the user enters 50, the loop will find the sum of 1, 2, ... 50.
*********************************************************************/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main ()
{
    int number,
        sum = 0;

    cout << "Please enter a positive integer." << endl;
    cin >> number;

    while(number <= 0)
    {
        cout << "You must enter a positive integer!" << endl;
        cin >> number;
    }
    for(int counter = 1; counter <= number; counter++)
    {
        sum += counter;
    }

    cout << "The sum of the numbers from 1 through " << number
         << " is " << sum << endl;

    return 0;
}
