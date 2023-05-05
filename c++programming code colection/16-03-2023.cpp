#include<iostream>
using namespace std;
int mian ()
{
	//line 6 to 20 is a bout taking a number from user and input in for loop
	int num;
	int limit;
	cout<<"Input number:";
	cin>>num;
	cout<<"Input limit:";
	cin>>limit;
	for(int i=num;i<=limit;i++)
	{
		cout<<"	"<<i;

	}
}
