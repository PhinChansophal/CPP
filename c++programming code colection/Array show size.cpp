#include<iostream>
using namespace std;
int main(){
	int Array[10],size;
	cout<<" Input size";
	cin>>size;
	for(int i = 0 ; i<size;i++)
	{
		cout<<"Enter the element"<<i+1<<":";
		cin>>Array[i];
		
	}
	int elementtodelete;
	cout<<" Enter the element  you want to delete:";
	cin>>elementtodelete;
	bool elementfound=false;
	int indextodelete;
	for(int i=0;i<size;i++)
	{
		if(Array[i]==elementtodelete)
		{
			elementfound = true ;
			indextodelete = i;
			break; 
		}
	}
	if(elementfound)
	{
		for(int i=indextodelete; i<size-1;i++)
	{
	Array[i]=Array[i+1];
	}
	cout<<"element delete successfully!"<<endl;
	}
	else 
	{
	cout<<" element not found in the Array!"<<endl;
	
	}
	cout<<" Updated array :";
	for(int i=0;i<size;i++)
	{
		cout<< Array[i]<<"";
		
	}
	cout<<endl;
	if(elementsaerch)
	{
		for(int 
	}
	}
	return 0;
	
}
