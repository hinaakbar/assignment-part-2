#include<iostream>
using namespace std;
int main()
{
	int n,r,arm=0,a;
	a=n;
	cout<<"enter value of =";
	cin>>n;
	while(n>0)
	{
		r=n%10;
		arm=(r*r*r)+arm;
		n=n/10;
	}
	if(a=arm)
	cout<<"armstrong";
	else
	cout<<"not armstrong";
}
