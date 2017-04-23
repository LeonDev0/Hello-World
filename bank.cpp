/* Bank app
6.13.16
Team WIN : Christian, Rachelle,Flavio

*/

//Intro


//Define variables and constants

#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{

//declare and init variables

string CustName;
string AcctNumb;
float BeginBalance;
float TotalWdraw;
float TotalDep;
int NumberChecks;
float CheckFee;
const float MonthFee=10.0;
float EndBalance;

//Intro

cout<<endl;
cout<<"Banking application by Team Win\n"<<endl;


//read from file balances.txt
ifstream infile;

infile.open ("balances.txt", ios::in); //in is used to read from files


// Read the 3 records
infile>>BeginBalance>>TotalWdraw>>TotalDep;
   
//close file
infile.close();

//Prompts
//Prompt for CustName
//Prompt for AcctNumb

cout<<"Please enter Customer Name:\t";
cin>>CustName;
cin.ignore();
cout<<endl;


cout<<"Please enter Account Number:\t";
cin>>AcctNumb;

cout<<endl;



do
{
//Prompt for NumberChecks

cout<<"Please enter number of checks written:\t";
cin>>NumberChecks;
cout<<endl;

//Input validation for number of checks no NEgative values accepted.

if (NumberChecks<0)
	//display invalid
cout<<"Invalid. No negative values are accepted.\n";
}
while (NumberChecks < 0);



//Use selection structure to compute check fees.

if (NumberChecks<20) 
	CheckFee=NumberChecks *.10 ;
else if (NumberChecks <= 39)
	CheckFee=NumberChecks *.08 ; // per check
else if (NumberChecks<=59)
	CheckFee=NumberChecks *.06; // per check
else
	CheckFee=NumberChecks * .04; // per check	


//Calculate ending balance.

EndBalance=BeginBalance + TotalDep-TotalWdraw-CheckFee-MonthFee;

cout<<fixed<<setprecision(2);
//Display Results

cout<<"*****************************Monthly Statements************************************\n";

cout<<"Customer Name:\t\t\t"<<CustName<<endl;
getline(cin, CustName);

cout<<"Account Number:\t\t\t"<<AcctNumb<<endl;

cout<<"Beginning Balance:\t\t"<<BeginBalance<<endl;
cout<<"Total Withdrawals:\t\t"<<TotalWdraw<<endl;
cout<<"Total Deposits:\t\t\t"<<TotalDep<<endl;
cout<<"Number of Checks Written:\t"<<NumberChecks<<endl;
cout<<"Check Fee:\t\t\t"<<CheckFee<<endl;
cout<<"Monthly Fee:\t\t\t"<<MonthFee<<endl;
cout<<"Ending Balance:\t\t\t"<<EndBalance<<endl<<endl;






return 0;

}

