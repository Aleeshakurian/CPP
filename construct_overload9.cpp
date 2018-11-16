#include<iostream>
using namespace std;
class area
{
	int length,bredth;
	public:
	area()
	{length=3;
		bredth=5;
	}
	area(int l,int b)
	{
		length=l;
		bredth=b;
	}
	void getlength()
	{
		cout<<"enter length and bredth"<<" ";
		cin>>length>>bredth;
	}
	int areacalculation()
	{
		return length*bredth;
	}
	void display(int temp)
	{
		cout<<"area:"<<temp<<"\n";
	}
};
main()
{
	area a1,a2(2,1);
	int temp;
	temp=a1.areacalculation();
	a1.display(temp);
	temp=a2.areacalculation();
	a2.display(temp);
}

