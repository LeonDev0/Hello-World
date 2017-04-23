/* Homework7 MsLevine intro c++
7/31/2016
Flavio Leon */

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;


//Prompt user for # of employees # should be passed by reference. input validate no neg numbers.
void GetNumEmployees(int &emps);

//Prompt for number of days each employee missed during past year. Keep track of total number this value should return as int.
//input validate no neg numbers.

int TotalDaysMissed (int);
z
// This accepts number of employees in co.....and total # of days missed by all employees.  Should return as a float the average number of days absent.
// no output or user input

float AverageDaysMissed(int, int);

int main()
{
	int numemps;
	int daysmissed;
GetNumEmployees(numemps);
cout<<numemps;	
cout<<endl<<endl;

daysmissed=TotalDaysMissed(numemps);
cout<<"Total days missed:\t"<<daysmissed;
cout<<endl<<endl;


cout<<"Average Days missed: "<<AverageDaysMissed(numemps, daysmissed);	
	
return 0;	
}

//Prompt user for # of employees # should be passed by reference. input validate no neg numbers.
void GetNumEmployees(int &emps)
{
	do
	{
		cout<<"Enter # of employees:   " ;
		cin>>emps;
		
			if(emps<0)
			{
				cout<<"\nInvalid no neg # accepted.\n";
			}
					
	}
			while (emps<0);
		
}

//Prompt for number of days each employee missed during past year. Keep track of total number this value should return as int.
//input validate no neg numbers.

int TotalDaysMissed (int numEmps)
{
int total=0;
int b=0;
	for (int i=0; i<numEmps; i++ )
		{
			
		
		cout<<"Enter days missed:  ";
		cin>>b;
		total+=b;		
		
		}

return total;
		
	
}

// This accepts number of employees in co.....and total # of days missed by all employees.  Should return as a float the average number of days absent.
// no output or user input

float AverageDaysMissed(int a, int b)
{



return b/a;


}





