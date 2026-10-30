#include<iostream>
using namespace std;
int main()
{ int marks,i=1,sum=0;
float avg;
do{ 
cout<<"Enter the marks of students"<<i<<":";
cin>>marks;
sum=sum+marks;

i++;
}
while(i<=10);
avg=sum/10.0;
cout<<"average markks="<<avg;
}
