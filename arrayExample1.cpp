//arrayExample1.cpp
//July 27, 2016
//This program demonstrates the concept of parallel arrays

#include<iostream>
#include<string>
using namespace std;

//global constant to represent the size of the arrays
const int SIZE = 3;

int main()
{
	//declare 3 parallel arrays
	string name[SIZE];

	//initialize all values to zero
	int age[SIZE] = {0};

	//initialize all values to 4.0
	float gpa[SIZE] = {4.0, 4.0, 4.0};

	//for loop to prompt for values
	for(int i = 0; i < SIZE; i++)
	{
		cout<<"Enter name "<<i + 1<<": ";
		cin>>name[i];

		cout<<"Enter GPA "<<i + 1<<": ";
		cin>>gpa[i];

		cout<<"Enter age "<<i + 1<<": ";
		cin>>age[i]; 

	}



	cout<<"Name\tGPA\tage\n";
	cout<<"----------------------------\n";
	//use for loop to display all the information stored in the arrays
	for(int i = 0; i < SIZE; i++)
	{
		cout<<name[i]<<"\t"<<gpa[i]<<"\t"<<age[i]<<endl;

	}	

		




 return 0;
}
