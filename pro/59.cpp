#include<iostream>
using namespace std;
int main()
{
	int a,b,r,i;
	i=1;
	r=1;
	cout<<"enter value of a=";
	cin >>a;
	cout<<"enter value of b=";
	cin >>b;
	do{
		r=r*a;
		i++;
	}
	while(i<=b);
	cout<<r<<endl;
}
