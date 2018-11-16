#include<iostream>
using namespace std;
class  complex
{
	int a,b;
	public:
	void read()
	{
		cout<<"Enter comlex number:";
		cin>>a>>b;
	}
	void display()
	{
		cout<<a<<"+"<<b<<"i"<<"\n";
	}
	friend complex sum(complex,complex);
};
complex sum(complex ob1,complex ob2)
{
	complex temp;
	temp.a=ob1.a+ob2.a;
	temp.b=ob1.b+ob2.b;
	return temp;
}
main()
{
	complex ob1,ob2,ob3;
	ob1.read();
	ob2.read();
        cout<<"Two complex numbers are:\n";
	ob1.display();
	ob2.display();
        cout<<"Sum=";
	ob3=sum(ob1,ob2);
	ob3.display();
}
