//
// Created by Kuljot Singh Biring on 6/16/18.
//
#include <iostream>
#include <cmath>

using namespace std;
 int main()
 {
     const double PI = 3.14;
     double pizzaArea, sliceArea = 14.125;
     int diameter, radius, numSlice;

     cout << "What is the diameter of the pizza?\n";
     cin >> diameter;

     radius = diameter / 2;

     pizzaArea = PI * pow(radius, 2);

     numSlice = pizzaArea / sliceArea;

     cout << "You can slice a pizza of " << diameter << " inches into " << numSlice << " slices\n";

     return 0;
 }
