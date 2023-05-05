#include<iostream>
  using namespace std;
  int main ()
  {
	    int size;
	    cout<<"The size of the warehouse:";
	    cin>>size;
	    int warehouse[size];
	    int maxwarehouse = warehouse[0];
	    cout<<"Enter valuse " <<endl;
	    for(int i=0;i<size;i++)
	    {
	    cin>>warehouse[i];
	    }
	    cout<<"The array is :"<<endl;
	    for(int i=0;i<size;i++)
	{
	    if(warehouse[i] > maxwarehouse)
	    maxwarehouse = warehouse[i];
	   	{
		cout<<"The legest element in array is  :"<<maxwarehouse<<endl;
	      
		}
	}
		cout<<warehouse;

	    
}
		
			

