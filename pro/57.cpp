#include<iostream>
using namespace std;
int main()
{
	int n,f,i;
	i=1;
	f=1;
	cout<<"enter num =";
	cin >>n;
	do
	{
		f=f*i;
		i++;
	}
	while(i<=n);
	cout<<f<<endl;
}
