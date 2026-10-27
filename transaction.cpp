#include<iostream>
using namespace std;
int main(){
	int amount , balance;
	cout<<"enter withdraw amount and balance";
	cin>>amount>>balance;
	if (amount<=balance){
		balance=balance-amount;
		cout<<"\n New balance"<<balance;
	}
}
