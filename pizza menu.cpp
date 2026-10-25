#include<iostream>
using namespace std;
int main()
{ char size;
int price, topping,total;
cout<<"pizza sizes\n";
cout<<"S=500rs\n";
cout<<"M=800rs\n";
cout<<"L=1000rs\n";
cout<<"XL=1500rs\n";
cout<<"Enter pizza sizes:S,M,L,XL";
cin>>size;
if(size=='S'||size=='s')
price=500;
else if(size=='M'||size=='m')
price=800;
else if(size=='L'||size=='l')
price=1000;
else if (size=='XL'||size=='l')
price=1500;
else
cout<<"the size is invalid";


cout<<"\nTopping:\n";
cout<<"1.Extra cheese(100rs)\n";
cout<<"2.Extra sauce(150rs)\n";
cout<<"3.Extra olives(150rs)\n";
cout<<"choose your topping";
cin>>topping;{
 if(topping==1)
 total=price+100;
 else if (topping==2)
 total =price+150;
 else if (topping==3) 
 total=price+150;
 else
 cout<<"Invalid topping";
 }
 cout<<"pizza price=Rs. "<<price;
 cout<<"total= Rs."<<total;
  
}
