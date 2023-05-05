//#include <iostream>
//using namespace std;
//	 
//	int num1,num2,result;
//	
//	void input();
//	void output();
//	int cal(int num1,int num2);
//	
//	int main()
//	{
//		input();
//		output();
//		
//	}
//	void input()
//	{
//		cout<<"input num1:";
//		cin>>num1;
//		cout<<"input num2:";
//		cin>>num2;
//		result= cal(num1,num2);
//		
//	}
//	void output()
//	{
//	
//		cout<<"num1: "<<num1<<"\tnum2: "<<num2<<"\tresult: "<<result<<endl;
//
//	}
//	int cal(int num1,int num2)
//	{
//		return num1+num2;
//		
//	}
//	

#include<iostream>
using namespace std;
	
	int loop,limit;
	int rsult;
	int ID[50];
	string Name[50];
	int price[50];
	
	void input();
	void output();
	int result(int ID,string Name,int price);
	
	int main()
	{
		cout<<"Input limit:";
		cin>>limit;
		input();
		output();
		
	}
	
	void input()
	{
		for(int i=1;i<=limit;i++)
		{
		cout<<"Input ID:";
		cin>>ID[i];
		cout<<"Input Name:";
		cin>>Name[i];
		cout<<"Input price:";
		cin>>price[i];
		
		}
		
	}
	void output()
	{
		for(int i=1;i<=limit;i++)
		{	
		cout<<"ID\t\tName\t\tprice\n";
		cout<<ID[i]<<"\t\t"<<Name[i]<<"\t$\t"<<price[i]<<endl;
		
		}
	}

