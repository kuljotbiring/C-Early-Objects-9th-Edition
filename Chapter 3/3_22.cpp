/*********************************************************************
** Author: Kuljot Biring
**
** Date: June 16, 2018
**
** Joe's Pizza Palace needs a program to calculate the
** number of slices a pizza of any size can be divided into. The
** program should perform the following steps:
**    A) Ask the user for the diameter of the pizza in inches.
**    B) Divide the diameter by 2 to get the radius.
**    C) Calculate the number of slices that may be taken from a
**       pizza of that size if each slice has an area of 14.125
**       square inches.
**       D) Display a message telling the number of slices.
** The number of square inches in the total pizza can be calculated
** with this formula: Area= 3.14r2 where variable r is the radius of
** the pizza. In your program make PI a named constant with the value
** 3.14. Display the number of slices as a whole number.
*********************************************************************/

#include <iostream>
#include <cmath>

 int main()
 {
     // declare and define variables
     const double PI {3.14};

     double sliceArea {14.125};

     int diameter {},
         radius {},
         numSlice {};

     // get user input
     std::cout << "What is the diameter of the pizza?\n";
     std::cin >> diameter;

     // calculate results
     radius = diameter / 2;
     double pizzaArea = PI * pow(radius, 2);
     numSlice = pizzaArea / sliceArea; // type demotion - full slices

     // display results
     std::cout << "You can slice a pizza of " << diameter << " inches into "
     << numSlice << " slices\n";

     return 0;
 }
