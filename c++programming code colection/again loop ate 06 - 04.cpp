#include<iostream>
using namespace std;

int main(){
	
	int Array [50],limit;
	string Name[50];
	int ID[50];
	string price[50];
	cout<<"Enter array:";
	cin>>limit;
	
	for(int i=1;i<limit;i++){
		cout<<"Input Name:";
		cin>>Name[i];
		cout<<"Input ID:";
		cin>>ID[i];
		cout<<"Input price:";
		cin>>price[i];		
	}
	for(int i=1;i<limit;i++){
		cout<<Name[i];
		cout<<ID[i];
		cout<<price[i];
	}
	int ShortID;
	cout<<"Enter element of the ShortID:";
	cin>>ShortID;
	
	for(int i=1;i<limit;i++)
	if(ID[i]==ShortID){
		cout<<Name[i];
		cout<<ID[i];
		cout<<price[i];
	}
	int SearchID;
	cout<<"Enter element SearchID:";
	cin>>SearchID;
	
	for(int i=1;i<limit;i++)
	if(ID[i]== SearchID){
		cout<<Name[i+1];
		cout<<ID[i+1];
		cout<<price[i+1];
	}
	int DeleteID;
	cout<<"Enter DeleteID:";
	cin>>DeleteID;
	
	for(int i=1;i<limit;i++)
	if(ID[i]==DeleteID){
		cout<<Name[i+1];
		cout<<ID[i+1];
		cout<<price[i+1];
		cout<<limit--;
		
	}
	{
	cout <<"Thank you my Dear Friend:";
		
	}
	cout<<endl;

	return 0;
	
	
}
