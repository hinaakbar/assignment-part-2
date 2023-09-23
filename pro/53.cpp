#include<iostream>
using namespace std;
int main()
{
	int n,r,i;
	r=0;
	cout<<"enter value of =";
	cin >>n;
	for(i=n;i!=0;i=i/10)
	r=r*10+i%10;
	cout<<"reverse num"<<r;
}
