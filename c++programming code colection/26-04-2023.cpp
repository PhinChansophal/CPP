	#include<iostream>
	using namespace std;
	int ID;
	string Name;
	void input();
	void output();
	int main()
	{
	int option;
	while(true);
		{
			cout<<"1.Input\n2.output"<<endl;
			cin>>option;
			switch (option)
			{
				case 1:
				input();
				break;
				
				case 2:
				output();
				break;
				
				case 3:
				exit(1);
				break;
				
				default :
				cout<<"Invalid";
				break ;
				
			}
		}
	
	}
	void input()
	{
		cout<<"Input ID:";
		cin>>ID;
		cout<<"Input Name:";
		cin>>Name;
		
	}
	void output()
	{
		cout<<ID<<"\t"<<Name<<endl;
		
	}
