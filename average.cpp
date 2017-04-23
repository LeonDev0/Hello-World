/*
Team: Christian, Leon, Rachelle
average.cpp
5/25/16
This program calculates the sum and average of values
 */

#include <iostream>
#include <iomanip>
using namespace std;

//main function
int main ()
{

//declare and init variables
	float score1 = 0.0;
	float score2 = 0.0;
	float score3 = 0.0;
	float score4 = 0.0;
	float score5 = 0.0;
	float sum = 0.0;
	float average = 0.0;

//intro
	cout<< "Welcome to the Average Calculator!!\n\n";

//prompt the user for scores
	cout<< "Please enter score 1: ";
	cin>>score1;
	cout<<endl;
	cout<<"Please enter score 2: ";
	cin>>score2;
	cout<<endl;
	cout<<"Please enter score 3: ";
	cin>>score3;	
	cout<<endl;
	cout<<"Please enter score 4: ";
	cin>>score4;
	cout<<endl;
	cout<< "Please enter score 5: ";
	cin>>score5;
	cout<<endl;

//calculate the sum of the scores 1-5
	sum = score1 + score2 + score3 + score4 + score5;
//calculate the average	
	average = sum/5.0;

//Display the sum
	cout<<fixed<<setprecision(1);
	cout<<"******Results******";
	cout<<endl;
	cout<<"Sum of Scores:\t\t" <<sum;
	cout<<endl;

//Display the average
	cout<<"Average test score:\t" <<average;
	cout<< endl;
return 0;
}
	
