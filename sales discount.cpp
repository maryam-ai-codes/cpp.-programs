#include<iostream>
using namespace std;
int main(){
	int amount ,finalamount,discount;
	char type;
	cout<<"enter purchase amount";
	cin>>amount;
	cout<<"enter p for premium and R for regular:";
	cin>>type;
	if(type=='p'||type=='P')
	{
	discount=amount*0.2;
	cout<<"discount:"<<discount<<endl;	
	}
	else if(type=='R'|| type=='r')
	{ if(amount>=0&&amount<=50)
	{
	cout<<" no discount";
	}
	if(amount>=51&&amount<=100){
		discount=amount*0.5;
		cout<<"Discount:"<<discount<<endl;}
	else if(amount>=101&&amount<=200){
		discount=amount*0.1;
		cout<<"discount"<<discount<<endl;
	}
	else{
		discount=amount*1.5;
		cout<<"Discount:"<<discount<<endl;
	}
}
finalamount=amount-discount;
cout<<"Discount=Rs. "<<discount<<endl;
cout<<"Final amount=rs. "<<finalamount<<endl;
	
} 
