/*pizza algorithm.cpp
June 1, 2016
Flavio Leon

This program calculates the area and cost of a single slice of pizza .
*/

#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int main ()

{

//Declare and initialize variables and constants
float radius = 0.0, totalCost = 0.0, sliceCost = 0.0, sliceArea = 0.0, pizzaArea = 0.0;
int numSlices = 0;

const float PI = 3.14;

//Intro
cout<<endl;

cout<<"WELCOME TO THE BROWARD PIZZERIA!!\n\n";

cout<<fixed<<setprecision(2);

//Prompt for radius
cout<<"Enter the radius of the pizza(in): ";
cin>>radius;
cout<<endl;

//Prompt for totalCost
cout<<"Enter the total cost of the pizza: "<<"$";
cin>>totalCost;
cout<<endl;

//Prompt for numSlices
cout<<"Enter the number of slices in the pizza: ";
cin>>numSlices;
cout<<endl;

cout<<"*****************************************\n";

//Calculate pizzaArea 
pizzaArea = PI * pow(radius, 2);

//Calculate sliceArea
sliceArea = pizzaArea / numSlices;

//Calculate sliceCost
sliceCost = totalCost / numSlices;

cout<<endl;

//Display slice cost and slice area
cout<<"Area of a single slice of pizza:\t"<<sliceArea<<" sq. in.\n";
cout<<"Cost of a single slice of pizza:\t"<<"$"<<sliceCost<<endl;

cout<<endl;
return 0;

}
