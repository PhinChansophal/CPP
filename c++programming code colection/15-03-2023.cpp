#include<iostream>
using namespace std;
int main()
{
	
	int num1,num2,num3,sum,limit;
	cout<<"Input the limit of loop:";
	cin>>limit;
	for(int i=0;i<limit;i++)
	{
		cout<<"Input num1:";
		cin>>num1;
		cout<<"Input num2:";
		cin>>num2;
		cout<<"Input num3:";
		cin>>num3;
		sum=num1+num2/num3;
		cout<<"sum"<<sum<<endl;
		
	}
}
