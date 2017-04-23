//Homework6 intro C++ MsLevine

#include <iostream>
#include <string>
#include <math.h>


using namespace std;

void PrintDate (int, int, int);
float CircleArea (float);
float Fahrenheit (float);
int Factorial (int);
bool IsSquare (int);




int main()



{


PrintDate (6,28,2011);

int mon, day, year;
cout<<"Enter month,date,year: ";
cin>>mon>>day>>year;
PrintDate (mon,day,year);
cout<<endl;

float myCirc ;
myCirc=CircleArea (8.00);
cout<<"Value is:"<<myCirc<<endl;
myCirc= CircleArea (9.00);
cout<<"Value is:"<<myCirc;

float newTemp;
	newTemp=Fahrenheit(36);
	cout<<"\nConverted Celsius 36 deg:"<<newTemp<<endl;
	
	
int numFactorial;
	numFactorial=Factorial (5);
	cout<<"Factored of 5:"<<numFactorial<<endl;
	int X=10;
	cout<<"Factored of 10:"<<Factorial (X)<<endl;
	cout<<endl;
	
	
	
	if(IsSquare(100))
	   cout << "100 is perfect square." << endl;
	else
	   cout << "100 is not a perfect square."<<endl;
	
	if(IsSquare(103))
	   cout << "103 is perfect square." << endl;
	else
	   cout << "103 is not a perfect square."<<endl;

return 0;
}




void PrintDate (int mon, int day, int year)
{
	
	cout<<mon<<"/"<<day<<"/"<<year<<endl;

	
}
float CircleArea (float myRad)

//return the area of a circle with a given radius

{
	float CalculatedCirc=0 ;

	
return CalculatedCirc=	(myRad*myRad)*3.14;



}

float Fahrenheit(float myFahren)

{
	float ConvertedFahren =0 ;

	
return ConvertedFahren=myFahren*9/5+32;
	
}

int Factorial (int num)
{
int total =1;
for (int i=num; i>=1; i--)


total*= i;

return total;
}


bool IsSquare (int booboo)

{
	int numsqr = 0;
	numsqr = sqrt(booboo);
	
	if (booboo == (numsqr*numsqr))	
	    return true;
	else 
	     return false;   
}
