#include<iostream>
using namespace std;
int main(){
	int Array,limit;
	string Name[4];
	int ID[4];
	int Mark[4];
	cout<<"Input Enter Array:";
	cin>>limit;
	for(int i = 0 ; i<limit ; i++)
	{
		cout<<"Input Name:"<<endl;
		cin>>Name[i];
		cout<<"Input ID:"<<endl;
		cin>>ID[i];
		cout<<"Input Mark:"<<endl;
		cin>>Mark[i];
	}
	
	for(int i = 0 ; i<limit ; i++)
	{
		cout<<Name[i];
		cout<<ID[i];
		cout<<Mark[i];
	}
	
	int SearchID ;
	cout<<"Enter 1. SearchID:"<<endl;
	cin>>SearchID;
	for(int i = 0 ; i<limit ;i++)
	if(ID[i] == SearchID)
		{
			cout<<"Input Name";
			cin>>Name[i];
			cout<<"Input ID";
			cin>>ID[i];
			cout<<"Input Mark";
			cin>> Mark[i];
			
		}

		for(int i = 0 ; i<limit ;i++)
		{	
		cout<<Name[i];
		cout<<ID[i];
		cout<<Mark[i];
		}
		
	int ShortID;
	cout<<"Enter 2. ShortID:";
	cin>>ShortID;
		for(int i=0 ; i<limit ; i++)
		if(ID[i] == ShortID)
		{
			cout<<"Input Name";
			cin>>Name[i];
			cout<<"Input ID";
			cin>>ID[i];
			cout<<"Input Mark";
			cin>> Mark[i];
			
		}	
		for(int i = 0 ; i<limit ;i++)
		{	
		cout<<Name[i];
		cout<<ID[i];
		cout<<Mark[i];
		}
		
	int DeleteID;
		cout<<"Enter 3.DeleteID";
		cin>>DeleteID;
		for(int i=0 ; i<limit ; i++)
		if(ID[i]== DeleteID)
		{
			cout<<"Input Name";
			cin>>Name[i+1];
			cout<<"Input ID";
			cin>>ID[i+1];
			cout<<"Input Mark";
			cin>> Mark[i+1];
			limit --;
			
		}	
		for(int i = 0 ; i<limit ;i++)
		{	
		cout<<Name[i+1];
		cout<<ID[i+1];
		cout<<Mark[i+1];
		}
}
	
