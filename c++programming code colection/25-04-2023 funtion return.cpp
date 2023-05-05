//	#include<iostream>
//	using namespace std;
//	
//	int sum(int num1,int num2,int num3);
//	int main()
//	{
//		int result;
//		int n1,n2,n3;
//		cout<<"Enter three number:";
//		cin>>n1,n2,n3;
//		cout<<result<<endl;
//	}
//	int sum(int num1,int num2, int num3)
//	{
//		return num1+num2+num3;
//	}

#include <iostream>
using namespace std;
int sum(int num1,int num2);
	int main()
	{
	int num1,num2;
	int result;
	cout<<"Enter two number:";
	cin>>num1>>num2;
	result=	sum(num1,num2);
	cout<<result;
	}
	int sum(int num1,int num2)
	{
		return num1+num2;
	}
	
