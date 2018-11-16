#include<iostream>
using namespace std;
class add_num
{
	int a,b;
	public:
	void read()
	{
		cout<<"Enter two numbers:";
		cin>>a>>b;
	}
	void add()
	{
		cout<<"Sum =";
		int sum;
		sum=a+b;
		cout<<sum<<"\n";
	}
}ob;
main()
{
	ob.read();
	ob.add();
}

