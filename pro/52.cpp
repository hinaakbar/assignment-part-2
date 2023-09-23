#include<iostream>
using namespace std;
int main()
{
	int a,i;
	long int sum;
	sum=0;
	cout<<"enter value of =";
	cin >>a;
	for(i=1;i<=a;i++)
	sum=sum+(i*i);
	cout<<"sum ="<<sum;
}
