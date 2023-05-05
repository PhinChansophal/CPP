#include<iostream>
using namespace std;
int ID;
string Name;
int Age;
string Gender;
float Hight;
float weigth;
int  PhoneNumber;
string G_mailAddres;
string FacebooksName;
string TelegramesName;
string Curentlyliving;
string Experent;
string Work;
float Salary;

void input();
void output();
int main()
{
	input();
	output();
}
void input()
{
	cout<<"Input ID:";
	cin>>ID;
	cout<<"Input Name:";
	cin>>Name;
	cout<<"Input Age:";
	cin>>Age;
	cout<<"Input Gender:";
	cin>>Gender;
	cout<<"Input Hight:";
	cin>>Hight;
	cout<<"Input Weigth:";
	cin>>weigth;
	cout<<"Input Phone Number:";
	cin>>PhoneNumber;
	cout<<"Input G_mailAddres:";
	cin>>G_mailAddres;
	cout<<"Input Facebooks Name:";
	cin>>FacebooksName;
	cout<<"Input Telegrames Name:";
	cin>>TelegramesName;
	cout<<"Input Curently living:";
	cin>>Curentlyliving;
	cout<<"Input Experent:";
	cin>>Experent;
	cout<<"Input show a work:";
	cin>>Work;
	cout<<"Input Salary:";
	cin>>Salary;
	
}
void output()
{
	cout<<ID<<"\t"<<Name<<"\t"<<Age<<"\t"<<Gender<<"\t"<<Hight<<"\t"<<weigth<<"\t"<<PhoneNumber<<"\t"<<G_mailAddres<<"\t"<<FacebooksName<<"\t"<<TelegramesName<<"\t"<<Curentlyliving<<"\t"<<Experent<<"\t"<<Work<<"\t"<<Salary;
	
}
