#include<iostream>
using namespace std;
int main()
{
	float c,r;
	c=1.0;
	r=2.0;
	while(r<=100){
		c=c+1.0/r;
		r=r+2;
	}
	cout<<"re="<<c<<endl;
	
}
