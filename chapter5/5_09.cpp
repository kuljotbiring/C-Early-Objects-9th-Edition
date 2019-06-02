/*********************************************************************
** Author: Kuljot Biring
**
** Date: July 07, 2018
**
** If moderately active persons cut their calorie intake
** by 500 calories a day, they can typically lose about 4 pounds a
** month. Write a program that has the users enter their starting
** weight and then creates and displays a table showing what their
** expected weight will be at the end of each month for the next 6
** months if they stay on this diet.
*********************************************************************/

#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::setw;

int main()
{
    //Declare variable
    int weight;

    //Get and validate user input
    do
    {
    cout << "What is your current weight?" << endl;
    cin >> weight;

    }while (weight <= 0);

    //Program header
    cout <<"\n-------------------------------------------\n"
           "* This table displays weight loss for 6   *\n"
           "* months if calories are cut by 500 a day *\n"
           "-------------------------------------------" << endl;
    //Table header
    cout << "\nMonth  Weight" << endl;
    cout << "--------------" << endl;

    //Populate table with month and weight data
    for(int month = 1; month <= 6; month++)
    {
        weight -= 4;
        cout << setw(2) << month << "    "
        << weight << " lbs" << endl;
    }

    return 0;
}
