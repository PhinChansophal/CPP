// assigerment at home;
#include<iostream>
using namespace std;
  
  int loop,limit;
  int result;
  int ID[50];
  string Name[50];
  int Total[50];
  float discount;
  
  void input();
  void Discount();
  void output();
  
  int main()
  {
    cout<<"Input limit:";
    cin>>limit;
    input();
    Discount();
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
    cout<<"Input Total:";
    cin>>Total[i];
    
    }
    
  }
  void output()
  {
    for(int i=1;i<=limit;i++)
    { 
	cout<<"Experation\n:"; 
	
    cout<<"ID\t\tName\t\tTotal\t\tDiscount\n";
    cout<<ID[i]<<"\t\t"<<Name[i]<<"\t\t$"<<Total[i]<<"\t\t$"<<Discount<<endl;
    
    }
  }
  void Discount()
{

  	cout<<"Input Discount\n:";
  	cin>>discount;
  	for(int i=1;i<=limit;i++)
	{
		Total[i]=Total[i]-(Total[i]*discount);
	}
}
