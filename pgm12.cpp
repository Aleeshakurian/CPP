#include<iostream>
using namespace std;
class base
{
	public:
		int i;
};
class derived1:virtual public base
{
	public:
		int j;
};
class derived2:virtual public base
{
	public:
		int k;
};
class derived3:public derived1,public derived2
{
public:
	int sum;
};
main()
{
	derived3 ob;
	ob.i=10;
	ob.j=20;
	ob.k=34;
	ob.sum=ob.i+ob.j+ob.k;
	cout<<"Three numbers are\n";
	cout<<ob.i<<"\n";
	cout<<ob.j<<"\n";
	cout<<ob.k<<"\n";
	cout<<"SUM ="<<ob.sum<<"\n";
}
