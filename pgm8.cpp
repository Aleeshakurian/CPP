#include<iostream>
using namespace std;
class twovalues
{
	int a;
	int b;
	public:
	twovalues(int i,int j)
	{
		a=i;
		b=j;
	}
	friend class Min;
};
class Min
{
	public:
		int min(twovalues x);
};
int Min::min(twovalues x)
{
	return x.a<x.b?x.a:x.b;
}
main()
{
	twovalues ob(10,29);
	Min m;
	cout<<"Minimum vale is:";
	cout<<m.min(ob)<<"\n";
}
