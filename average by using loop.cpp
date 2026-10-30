#include<iostream>
using namespace std;
int main()
{ int sum=0;
int i=0;
do{
	sum=sum+i;
	i++;
}
while(i<=25);
cout<<"sum:"<<sum<<endl;
cout<<" averages:"<<sum/25<<endl;
}
