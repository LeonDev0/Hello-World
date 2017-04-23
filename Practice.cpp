#include <iostream>
#include<string>
#include<iomanip>

using namespace std;


float GetHours();
void GetRate(float &rate);
float numRooms;

int main()
{

GetHours();

GetRate (numRooms);

cout<<fixed<<setprecision(2);
cout<<numRooms;

return 0;

}


float GetHours()
{
float hours;	
		do
		{
	
				cout<<"Enter num hours: ";
				cin>>hours;

				if(hours<1||hours>10)
				{
				
				cout<<"\nInvalid Enter 1-10.\n\n";
				}
		}
				while(hours<1||hours>10);
	
return hours;			
}

//prompt for hourly rate validate it is at least 7.79

void GetRate (float &rate)
{
	
//float pay;
	do
	{
		cout<<"Enter hourly pay: ";
		cin>>rate;
		
		if (rate<7.79)
			{
													
			cout<<"invalid. enter more than 7.79\n";
			}
	}
		while (rate<7.79);		
		

}







