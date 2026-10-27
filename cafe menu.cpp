#include<iostream>
using namespace std;
int main(){
	int choice;
	cout<<"Enter your choice:";
	cout<<"1. coffee";
	cout<<"2.Tea";
	cout<<"3.Juice";
	cout<<"4.Water";
	cin>>choice;
	switch(choice) {
		case 1:
		{	cout<<"coffee..>200Rs.";
			break;
	}
	case 2:{ 
		cout<<"tea...>100Rs.";
		break;
	}
	case 3:
	{
		cout<<"Juice..>300rs.";
		break;
	}
	 case 4:
	{
		cout<<"Water..>60Rs.";
		break;
	}
} }
