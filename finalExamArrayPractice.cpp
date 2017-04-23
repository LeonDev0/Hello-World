//finalExamArrayPractice.cpp
//Aug 7, 2016

#include<iostream>
using namespace std;

int main()
{	//declare variables
	float product = 0.0;
	int over70Count = 0;
	float sum = 0.0, average = 0.0;

	//declare an array of floats, size 6, called grades
	//initialize all values in the array to 0.0
	float grades[6] = {0.0};
	
	//use a for loop to prompt for the values in the array
	for(int i = 0; i < 6; i++)
	{
		cout<<"Enter grade "<<i + 1<<": ";
		cin>>grades[i];

	}
	
	//display the third value in the array
	cout<<"\nThe third value in the array = "<<grades[2]<<endl;

		
	//assign the value 73.5 to the fifth element in the array
	grades[4] = 73.5;

	//store the product of the first and third elements in the array in a variable called product
	product = grades[0] * grades[2];

	cout<<"\nThe product of the first and third values = "<<product<<endl;

	//use a for loop to calculate the sum and average of the first 3 values in the array
	for(int i = 0; i < 3; i++)
	{
		sum += grades[i];
	}	

	average = sum / 3;

	cout<<"\nThe sum of the first three values = "<<sum<<endl;
	cout<<"\nThe average of the first three values = "<<average<<endl;

	//Use a for loop to count how many values in the array are at least 70.0
	//store the count in over70Count

	for(int i = 0; i < 6; i++)
	{
		if(grades[i] >= 70.0)
			over70Count++;

	}
	//use a for loop to display the values in the array
	for(int i = 0; i < 6; i++)
	{
		cout<<grades[i]<<" ";

	}
	
	cout<<"\n\nThe number of values >= 70 = "<<over70Count<<endl;
 return 0;
}
