/* Income Tax App for C++class- Ms.Levine
Flavio Leon
June 14 2016
*/



//Declare and init variables

#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>

using namespace std;

int main()
{

string name;
float annual;
float taxrate;
float totaltaxowed;
float taxrateDopple;

//Program Intro

//Total Income Taxes Owed

cout<<endl;

//Prompt for user name
cout<<"Please enter name:\t\t";
getline(cin, name);
cout<<endl;

/*Prompt for annual income
cout<<"Please enter annual income:\t\t";
cin>>annual;
cout<<endl;
*/

do
{
//Prompt for annual income

cout<<"Please enter annual income:\t\t";
cin>>annual;
cout<<endl;

if (annual<0)
	//display invalid
cout<<"****Warning! Invalid. Negative values are not accepted. Please try again.****\n\n";
}
while (annual < 0);



//Display users name, annual income,income tax rate, and total taxed owed.



if      (annual<=7825.00)  //taxes=10%
	taxrate =.10;
	

else if (annual<=31850.00) //taxes=15%
	{taxrate=.15;
	
}
else if (annual<=77100.00) //taxes=25%
{	taxrate=.25;
	}
else if (annual<=160850.00) //taxes=28%
{	taxrate=.28;
	
}
else if(annual<=349700.00) //taxes=35%
{	taxrate=.35;
	
}
else if (annual>=349701.00)// taxes =38%
 {	taxrate=.38;	
}

//TotalTaxOwed Ifs

if      (annual<=7825.00)  //taxes=10%
	{totaltaxowed=annual*taxrate;
	
}
else if (annual<=31850.00) //taxes=15%
	{
	totaltaxowed=annual*taxrate;
}
else if (annual<=77100.00) //taxes=25%
{
	totaltaxowed=annual*taxrate;
}
else if (annual<=160850.00) //taxes=28%
{	
	totaltaxowed=annual*taxrate;
}
else if(annual<=349700.00) //taxes=35%
{	
	totaltaxowed=annual*taxrate;
}
else if (annual>=349701.00)// taxes =38%
 {
	totaltaxowed=annual*taxrate;
}

//Ifs for taxrate dopplegangers

if      (annual<=7825.00)  //taxes=10%
	{taxrateDopple=10;
	
}
else if (annual<=31850.00) //taxes=15%
	{
	taxrateDopple=15;
}
else if (annual<=77100.00) //taxes=25%
{
	taxrateDopple=25;
}
else if (annual<=160850.00) //taxes=28%
{	
	taxrateDopple=28;
}
else if(annual<=349700.00) //taxes=35%
{	
	taxrateDopple=35;
}
else if (annual>=349701.00)// taxes =38%
 {
	taxrateDopple=38;
}





//Append to file taxes.txt 
//Brad Pittt  2220000000.00  38%    83600000.00

cout<<fixed<<setprecision(2);
cout<<"Name\t\t\t\t"<<"Annual Income\t\t"<<"Tax rate\t\t"<<"Total Tax Owed"<<endl;
cout<<"-----------------------------------------------------------------------------------------------"<<endl;

cout<<name<<"\t\t\t"<<annual<<"\t\t"<<taxrateDopple<<"%\t\t\t"<<"$"<<totaltaxowed;

cout<<endl;
cout<<endl;


//read to file taxes.txt
ofstream outputFile;

outputFile.open ("taxes.txt", ios::app); 


// output the 4 records
outputFile<<name<<annual<<taxrate<<totaltaxowed;
   
//close file
outputFile.close();



return 0;

}
