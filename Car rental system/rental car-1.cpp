#include<iostream>
#include <unistd.h>
using namespace std;
class car{
	public:
	void rent1()
	{
		cout<<"\t\t INSTRUCTIONS"<<endl;
		cout<<"\t Please follow the traffic rules  "<<endl;
		cout<<endl;
		cout<<"\t Rent of car is 100 and per km is 6 rupee"<<endl;
		int d,rent;
		cout<<"\t Enter the distance   =";
		cin>>d;
		rent=6*d;
		rent=rent+100;
		cout<<"\t Rent of the car is    "<<rent<<endl;
		
	}
	void rent2()
	{
		cout<<"\t\t INSTRUCTIONS"<<endl;
		cout<<"\t Please follow the traffic rules  "<<endl;
		cout<<endl;
		cout<<"\t Rent of car is 1000 and per km is 6 rupee"<<endl;
		int d,rent,day;
		cout<<"\t Enter the distance   =";
		cin>>d;
		cout<<"Enter the days you want to take car on rent    =";
		cin>>day;
		rent=6*d;
	    rent=rent+1000;
		rent=rent*day;
		cout<<"\t Rent of the car is    "<<rent<<endl;
		
	}
}; 
int main()
{car obj;
  int z;
    do{
	
	cout<<"\t\t WELCOME TO RENTAL CAR SERVICE"<<endl;
	int a,s;
	cout<<"ENTER 1  if you want to take car rent for Traveling inside CITY"<<endl;
	cout<<endl;
	cout<<"ENTER 2  if you want to take car rent for Traveling OUTSTATIONS"<<endl;
	cin>>a;
	cout<<"\t Please select the car"<<endl<<"\t PRESS 1 for HYUNDAI cars"<<endl;
	
	cout<<"\t PRESS 2 for SUZUKI cars "<<endl;
	cout<<"\t PRESS 3 for HONDA cars "<<endl;
	cout<<"\t PRESS 4 for MAHINDRA cars "<<endl;
	cin>>s;
	
	system("CLS");
	cout<<"please wait.................."<<endl;
	sleep(1);
	cout<<endl;
	cout<<endl;
	if(s==1)
	{
		cout<<"\t You have selected HYUNDAI cars"<<endl;
	}
	if(s==2)
	{
		cout<<"\t You have selected SUZUKI cars"<<endl;
	}
	if(s==3)
	{
		cout<<"\t You have selected HONDA cars"<<endl;
	}
	if(s==4)
	{
		cout<<"\t You have selected MAHINDRA cars"<<endl;
	}
	
	cout<<endl;
	
	if(a==1)
	{
	obj.rent1();
	
	cout<<endl;
	cout<<"\t \t Happy Journey"	<<endl;
	}
	
	if(a==2)
	{
	obj.rent2();
	
	cout<<endl;
	cout<<"\t \t Happy Journey"	<<endl;
	}
	
	if(a!=1 && a!=2)
	{
		cout<<"\t\t Wrong input!"<<endl;
	}
	cout<<endl;
	
    cout<<"Wish to continue PRESS 1 or PRESS any key to EXIT   =";
	cin>>z;
	system("CLS");
	cout<<"\t please wait ................."<<endl;
	sleep(1);	
}
	while(z==1);
	
	system("CLS");
	cout<<"\t please wait ................."<<endl;
	sleep(1);
	cout<<"\t\t\t you have selected EXIT"<<endl;
	
	cout<<endl;
	
	cout<<"\t\t\t\tThank You!";
	
	return 0;
	
}
