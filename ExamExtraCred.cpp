//Ms Levine intro c++
//8816 Flavio Leon

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

//Prompt user for item name and cost.  +Input Validate cost not less than 0.
void GetItem (string &name, float &cost);

//Calculate subtotal of 3 items.
float CalculateSubTotal (float cost1, float cost2, float cost3);

//Calculate and return 6% of a float value.
float CalculateTax(float sub);

//Fuction that displays receipt as shown:
void DisplayReceipt (string name1, string name2, string name3, float cost1, float cost2, float cost3, float sub, float tax);


int main ()
{
string item1name, item2name, item3name;
float item1Cost, item2Cost, item3Cost, subtotal, totaltax;

GetItem (item1name, item1Cost);
GetItem (item2name, item2Cost);
GetItem (item3name, item3Cost);

subtotal=CalculateSubTotal(item1Cost,item2Cost,item3Cost);
//cout<<subtotal;
cout<<endl;

totaltax=CalculateTax(subtotal);
//cout<<totaltax;
cout<<endl;

DisplayReceipt(item1name,item2name,item3name,item1Cost,item2Cost,item3Cost,subtotal,totaltax);

	
return 0;

}


//Prompt user for item name and cost.  +Input Validate cost not less than 0.
void GetItem (string &name, float &cost)
{
do
{

cout<<"Enter name: \t";
cin>>name;

cout<<"Enter cost:  \t";
cin>>cost;
cout<<endl;
		if(cost<=0)
		{
			cout<<"Invalid.I pity the fool.\n\n"; 
		}
}

	while(cost<=0);

}

//Calculate subtotal of 3 items and store in subtotal.
float CalculateSubTotal (float cost1, float cost2, float cost3)
{
return cost1+cost2+cost3;	
}

//Calculate and return 6% of a float value.
float CalculateTax(float sub)
{
return sub*.06	;
}

//Fuction that displays receipt as shown:
void DisplayReceipt (string name1, string name2, string name3, float cost1, float cost2, float cost3, float sub, float tax)
{
cout<<fixed<<setprecision(2);
cout<<"Items\t\t"<<"Cost\n";
cout<<"---------------------------\n";	
cout<<name1<<"\t\t$"<<cost1<<endl;
cout<<name2<<"\t\t$"<<cost2<<endl;
cout<<name3<<"\t\t$"<<cost3<<endl;
cout<<endl;
cout<<"SubTotal:\t$"<<sub<<endl;
cout<<"Tax:\t\t $"<<tax<<endl;
cout<<"Total:\t\t$"<<sub+tax<<endl;
cout<<"\n\n";
}



