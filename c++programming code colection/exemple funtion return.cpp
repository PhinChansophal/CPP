	#include<iostream>
	using namespace std;

	int sum(int num1 , int num2 , int num3);
	
	int main()
	{
		int Result;
		int n1,n2,n3;
		cout<<"Enter three num:";
		cin>>n1>>n2>>n3;	
		Result=sum(n1,n2,n3);
		cout<<Result<<endl;
	}
	int sum(int num1,int num2 ,int num3)
	{
		return num1+num2+num3;
	}
