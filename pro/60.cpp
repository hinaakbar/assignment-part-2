#include<iostream>
using namespace std;
int main()
{
	int s,e,c;
	cout<<"enter value of starting=";
	cin >>s;
	cout<<"enter value of ending =";
	cin >>e;
	c=s;
	do{
		if(c%2!=0)
		cout<<c<<endl;
		c++;
	}
	while(c<=e);
}
