#include<iostream>
using namespace std;
#define size 100
class stack
{
	int stck[size];
	int tos;
	public:
	stack()
	{
		tos=0;
		cout<<"Stack initialized\n";
	}

	~stack()
	{
		cout<<"\nStack destroyed\n";
	}
	void push(int i)
	{
		if(tos==size)
		{
			cout<<"stack fill\n";
		}
		stck[tos]=i;
		tos++;
	}

	int pop()
	{
		if(tos==0)
		{
			cout<<"Stack underflow\n";
		}
		tos--;
		return stck[tos];
	}

};
main()
{
	stack a,b;
	a.push(1);
	b.push(2);
	a.push(3);
	b.push(4);
	cout<<a.pop()<<" ";
	cout<<b.pop()<<" ";
	cout<<a.pop()<<" ";
	cout<<b.pop()<<" ";
}
