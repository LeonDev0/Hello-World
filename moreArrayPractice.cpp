//moreArrayPractice.cpp
//August 3, 2016
//This program demonstrates some common algorithms associated with arrays.

#include<iostream>
#include<fstream>
using namespace std;

//return type: int (number of grades read in)
//parameters: 1 array of floats
//purpose: This function reads the data from "grades.txt" and stores the results in the array.
int ReadInGrades(float[]);

//return type: float
//parameters: 1 float array, 1 int (size of the array)
//Purpose: This function will return the highest float.
float FindHighest(const float[], int);

//return type: float
//parameters: 1 float array, 1 int (size of the array)
//Purpose: This function will return the average of the floats.
float FindAverage(const float[], int);

//return type: int 
//parameters: 1 float array, 1 int (size of the array)
//purpose: This function returns the number of As (90 - 100)
int ACount(const float[], int);

//return type: void
//parameters: 1 float array, 1 int(size)
//purpose:This function displays all the values in the array
void DisplayValues(const float[], int); 

const int SIZE = 20;



int main()
{
	//declare an array to store the grades
	float gradeArray[SIZE] = {0.0};

	//declare an int to store the number of grades that were read from the file
	int numGrades = 0;

	//call functions
	numGrades = ReadInGrades(gradeArray);

	DisplayValues(gradeArray, numGrades);

	cout<<"\nThe highest grade read in = "<<FindHighest(gradeArray, numGrades)<<endl;

	cout<<"\nThe average grade read in = "<<FindAverage(gradeArray, numGrades)<<endl;

	cout<<"\nThe number of A grades = "<<ACount(gradeArray, numGrades)<<endl;

 return 0;
}

//purpose: This function reads the data from "grades.txt" and stores the results in the array.
int ReadInGrades(float gradeArr[])
{
	//declare file pointer for input
	ifstream infile;

	int count = 0;

	//open file for input
	infile.open("grades.txt", ios::in);

	//read in first line (priming read)
	infile>>gradeArr[count];

	while(infile)
	{
		//add to count
		count++;		
	
		//read in next line
		infile>>gradeArr[count];
	}

	//close file
	infile.close();

	return count;

}

//Purpose: This function will return the highest float.
float FindHighest(const float arr[], int size)
{
	//declare local variable; set equal to the first element in the array
	float highNum = arr[0]; 

	for(int i = 1; i < size; i++)
	{
	if (arr[i] > highNum)
		{
		highNum = arr[i];
		}
	}

	
	return highNum;


}

//Purpose: This function will return the average of the floats.
float FindAverage(const float arr[], int size)
{
	//local variables
	float average = 0.0, total = 0.0;

	for(int i = 0; i < size; i++)
	{
		//add to accumulator
		total += arr[i];

	}

	//calculate average
	average = total / size;

	return average;
	
}

//purpose: This function returns the number of As (90 - 100)
int ACount(const float arr[], int size)
{
	//local variable
	int countA = 0;

	for(int i = 0; i <= size; i++)
	{
		if(arr[i] >= 90)
		{
			//add to count
			countA++;
		}
			

	}
	
	return countA;	
}

//purpose:This function displays all the values in the array
void DisplayValues(const float arr[], int size)
{
	for(int i = 0;  i < size; i++)
	{
		cout<<arr[i]<<" ";
	} 

	cout<<endl;

}






