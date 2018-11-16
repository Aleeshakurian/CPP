#include<iostream>
using namespace std;
class rectangle
{ 
	float w,h,rect;
	public:
	void area()
	{
		cout<<"Enter width and height of rectangle:";
		cin>>w>>h;
		rect=w*h;
		cout<<"Area of rectangle="<<rect<<"\n";
	}
};
class square
{float a,sq;
	public:
		void area()
		{
			cout<<"Enter side of square:";
			cin>>a;
			sq=a*a;
			cout<<"Area of Square="<<sq<<"\n";
		}
};
class circle
{
	float r,circ;
	public:
	void area()
	{
		cout<<"Enter radious of circle:";
		cin>>r;
		circ=3.14*r*r;
		cout<<"Area of circle="<<circ<<"\n";
	}
};

main()
{
	rectangle ob1 ;
	square ob2;
	circle ob3;
	ob1.area();
	ob2.area();
	ob3.area();

}
