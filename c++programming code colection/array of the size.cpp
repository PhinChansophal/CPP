#include<iostream> 
using namespace std;
int main(){
	int array[10],size;
	cout<<"Input size";
	cin>>size;
	
	// input the elements of the array 
	for (int i=0;i<size;i++)
	{
		cout<<" Enter elements "<<i+1<<" ";
		cin>>array[i];
		
	}
	// output the elements of the array
	cout<<" array elements :" ;
	for(int i = 0 ; i< size ; i++)
	cout<<array [i]<<" ";
	{
	
	}	
	
	cout<<endl;
	// search for an elements in the array 
	int search_num;
	cout<<" Enter a number to search for:";
	cin>>search_num;
	
	bool found = false ;
	for(int i = 0 ; i<size ; i++)
	{
		if (array[i] == search_num)
		{
			cout<<search_num << "is found at index " << i << endl;
			found = true ;
			break ;
			
		}
	}
	if (!found ) 
	{
		cout<< search_num << " is not found in the array "<< endl;
		
	}
	return 0;
}
