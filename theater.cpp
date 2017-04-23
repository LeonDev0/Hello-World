/* Theater
For C++Class w Ms.Levine Homework2
Flavio Leon
6.6.16
*/

#include <iostream>  
#include <string>
#include <iomanip>

using namespace std;
int main()
{


//Declare and initialize variables and constant

string MovieName;
float AdultSold;
float ChildSold;

//Prompt for movie name

cout<<endl;
cout<<endl;
cout<<endl;
cout<<"Movie Title please?\t\t";
getline (cin, MovieName);

//Prompt for adult tickets sold
cout<<"Number of Adult tickets sold?\t";
cin>>AdultSold;

//Prompt for child tickets sold
cout<<"Number of Child tickets sold?\t";
cin>>ChildSold;

float GrossBoxOffc = AdultSold*9+ChildSold*6;
float NetBoxOffc = GrossBoxOffc*.25;
float AmtDistr = GrossBoxOffc*.75;

cout<<endl;
cout<<endl;
cout<<endl;
cout<<"*****************Ticket Sales***************************\n";

cout<<"Movie name:\t\t\t"<<MovieName<<endl;
cout<<"Adult Tickets Sold:\t\t"<<AdultSold<<endl;
cout<<"Child Tickets Sold:\t\t"<<ChildSold<<endl;
cout<<fixed<<setprecision(2);
cout<<"Gross Box Office Profit:\t$"<<GrossBoxOffc<<endl;
cout<<"Net Box Office Profit:\t\t$"<<NetBoxOffc<<endl;
cout<<"Amount Paid to the Distributor:\t$"<<AmtDistr<<endl;



cout<<"********************************************************\n\n\n";


return 0;

}
