#include<iostream>
using namespace std;
inline void large(int a,int b,int c)
{
	if(a>b)
	{
		if(a>c)
		{   
			cout<<a<<" is largest\n";
		}
		else
		{
			cout<<c<<" is largest\n";
		}
	}
	else 
	{
		if(b>c)
		{
			cout<<b<<" is largest\n";
		}
		else
		{
			cout<<c<<" is largest\n";
		}
	}
}
main()
{
	int a,b,c;
	cout<<"Enter three numbers\n";
	cin>>a>>b>>c;
	large(a,b,c);
}
