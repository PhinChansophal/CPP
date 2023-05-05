#include<iostream>
using namespace std;
int main();	{
		int size;
		cout<<"The sie of the warehouse:";
		cin>>size;
		int warehouse[size];
		int maxwarehouse = warehouse[0];
		cout<<"Enter value "<<endl;
		for(int i = 1; i <= size ; i++)
		{
			cin>>warehouse[i];
			
		}
		cout<<"the size is :";
		for(int i =1 ; i <= size ; i++)
		{
			if(warehouse[i]>maxwarehouse)
		{
			maxwarehouse = warehouse[i];
		}	
			cout<<maxwarehouse[i]<<" ",
	}	
	
	
