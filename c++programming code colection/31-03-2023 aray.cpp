#include<iostream>
using namespace std;
int main()
{
	int ID[50],limit;
	string Name[50];
	double GPA[50];
	{
		cout <<"Input the limit :"<<endl;
		cin  >> limit;
		for(int i = 1; i<=limit ; i++)	
	{
		cout<<"Input the ID:" ;
		cin >>ID[i];
		cout<<"Input the Name:";
		cin>> Name[i];
		cout<<"Input the GPA:";
		cin>>GPA[i];
	
	}
		cout<<"ID\tName\tGPA"<<endl;
		for(int i = 1; i<=limit ; i++)

		{
		cout<<ID[i]<<"\t"<<Name[i]<<"\t"<<GPA[i]<<endl;
		}
	}
		
	return 0;
}
