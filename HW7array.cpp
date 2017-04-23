/*Homework7Arrays.cpp
Aug 1, 2016 Ms Levine Intro C++
Flavio Leon */

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

//global constant to represent the size of the arrays
const int SIZE = 4;

int main()
{
	//declare 4 parallel arrays
	string name[SIZE];

	//initialize all values to zero
	int Hrs[SIZE] = {0};

	//initialize all values to 4.0
	float Rate[SIZE] = {0.0, 0.0, 0.0, 0.0 };


	
	//Weekly earnings
	float Weekly [SIZE] = {0.0,0.0,0.0,0.0};

cout<<fixed<<showpoint<<setprecision(2)<<endl;
	
		//for loop to prompt for values
	for(int i = 0; i < SIZE; i++)
	
	
	{
		cout<<"Enter name "<<i + 1<<": ";
		cin>>name[i];

		cout<<"Enter Hours Worked "<<i + 1<<": ";
		cin>>Hrs[i];

		cout<<"Enter Hourly Rate "<<i + 1<<": ";
		cin>>Rate[i]; 

	}

	for(int i=0; i<SIZE; i++)
		{
			Weekly[i]= Rate[i] * Hrs[i];
		}




	cout<<"Name\tHours\tPay\tWeekly\n";
	cout<<"----------------------------\n";
	
	
	//use for loop to display all the information stored in the arrays
	for(int i = 0; i < SIZE; i++)
	{
		cout<<name[i]<<"\t"<<Hrs[i]<<"\t"<<Rate[i]<<"\t"<<Weekly[i]<<endl;

	}	

		




 return 0;
}
