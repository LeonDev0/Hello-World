//Homework6 intro C++ MsLevine

#include <iostream>
#include <string>

float CalculatedCirc ;
float ConvertedFahren ;


using namespace std;

void PrintDate (int num1, int num2, int num3)
{
	
	cout<<num1<<"/"<<num2<<"/"<<num3<<endl;

	
}
void CircleArea (float num1)

//return the area of a circle with a given radius

{
CalculatedCirc=	(num1*2)*3.14;
cout<<CalculatedCirc<<endl;

}

void Fahrenheit(float num1)

{
ConvertedFahren=num1*9/5+32;
cout<<ConvertedFahren;
	
	
}

void Factorial (float num1)
{

 cout<<num1--*num1*--num1*--num1*--num1;

}



int main()



{
int num1, num2, num3;

PrintDate (6,28,2011);
cout<<"Enter month,date,year: ";
cin>>num1>>num2>>num3;
PrintDate (num1,num2,num3);
cout<<endl;

CircleArea (2);
cout<<"Enter radius: ";
cin>>num1;
CircleArea (num1);
cout<<endl;


Fahrenheit (20) ; //actual result in celsius
cout<<" celsius";
cout<<"\nEnter new Fahrenheit for conversion:";
cin>>num1;
Fahrenheit (num1);
cout<<" celsius.\n";
cout<<endl;


Factorial (5);
cout<<"\nEnter new number to step down 5x while multiplying: ";
cin>>num1;
Factorial (num1);
cout<<endl;


return 0;
}

