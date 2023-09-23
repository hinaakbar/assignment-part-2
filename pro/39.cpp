#include<iostream>
using namespace std;
int main()
{
	int i,n,count;
	count= 0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{ 
		  count++;
		}
	}
	if(count==2)
	cout<<"prime num";
	else
	cout<<"not prime num";
}
