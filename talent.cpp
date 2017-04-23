//talent.cpp
//July 20, 2016
//This program demonstrates more functions.
#include<iostream>
#include<iomanip>
using namespace std;
//function prototypes

//return type: void
//parameters: 1 float by ref(score)
//purpose: This function prompts for and validates a score between 0 and 10.
void GetJudgeData(float&);

//return type: float
//parameters: 5 floats
//purpose: This function drops the highest and lowest values and returns the average of the remaining 3.
float CalcScore(float, float, float, float, float);

//return type: float
//parameters: 5 floats
//purpose: This function returns the lowest of the five floats.
float FindLowest(float, float, float, float, float);

float FindHighest(float, float, float, float, float);

int main()
{
	float score1 = 0.0, score2 = 0.0, score3 = 0.0, score4 = 0.0, score5 = 0.0, finalScore = 0.0;

	//call GetJudgeData to prompt for 5 scores
	GetJudgeData(score1);
	GetJudgeData(score2);
	GetJudgeData(score3);
	GetJudgeData(score4);
	GetJudgeData(score5);

	//store the final average in finalScore
	finalScore = CalcScore(score1, score2, score3, score4, score5);

	//display for testing
	cout << fixed << setprecision(1);
	cout << "Your final score = " << finalScore << endl;

	return 0;
}

//function definitions
//purpose: This function prompts for and validates a score between 0 and 10.
void GetJudgeData(float &score)
{
	do
	{
		//prompt for score
		cout << "Enter a score between 0 and 10: ";
		cin >> score;
		if (score < 0 || score > 10)
			cout << "Invalid.  Score must be between 0 and 10.\n\n";
	} while (score < 0 || score > 10);
}

//purpose: This function returns the lowest of the five floats.
float FindLowest(float num1, float num2, float num3, float num4, float num5)
{ 
	//declare local variable
	float lowNum = num1; 

	if (num2 < lowNum)
		lowNum = num2;

	if (num3 < lowNum)
		lowNum = num3;

	if (num4 < lowNum)
		lowNum = num4;

	if (num5 < lowNum)
		lowNum = num5;

	return lowNum;
}

//purpose: This function returns the highest of the five floats.
float FindHighest(float num1, float num2, float num3, float num4, float num5)
{
	//declare local variable
	float highNum = num1;

	if (num2 > highNum)
		highNum = num2;

	if (num3 > highNum)
		highNum = num3;

	if (num4 > highNum)
		highNum = num4;

	if (num5 > highNum)
		highNum = num5;

	return highNum;
}

//purpose: This function drops the highest and lowest values and returns the average of the remaining 3.
float CalcScore(float sc1, float sc2, float sc3, float sc4, float sc5)
{
	//local variables
	float lowest = FindLowest(sc1, sc2, sc3, sc4, sc5);
	float highest = FindHighest(sc1, sc2, sc3, sc4, sc5);

	return (sc1 + sc2 + sc3 + sc4 + sc5 - lowest - highest) / 3.0;

}