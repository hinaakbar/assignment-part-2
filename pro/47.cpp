#include<iostream>
using namespace std;
int main()
{
	int n1,n2,i,gr;
	gr=i;
	cout<<"enter value of =";
	cin>>n1;
	cout<<"enter value of =";
	cin>>n2;
	for(i=1;i<=n1&&i<=n2;i++){
		if(n1%i==0&&n2%i==0)
		{
			gr=i;
		}
	}
	cout<<gr;
	    
}
