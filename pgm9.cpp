#include<iostream>
using namespace std;
class fun
{
	public:
		int volume(int);
		float volume(float,float);
		float volume(float,float, float);
};

int fun::volume(int a)
{
	return(a*a*a);
}
float fun::volume(float r,float h)
{
	return(3.14*r*r*h);
}
float fun::volume(float l,float b,float h2)
{
	return(l*b*h2);
}
main()
{
	int a,l,b,h,r,h2;
	fun ob;
	cout<<"Ente side of a cube:";
	cin>>a;
	cout<<"Volume of a cube is="<<ob.volume(a)<<"\n";
	cout<<"Enter radious and height of cylinder:";
	cin>>r>>h;
	cout<<"Volume of cylinder is="<<ob.volume(r,h)<<"\n";
	cout<<"Enter length,breadth and height of rectangle:";
	cin>>l>>b>>h2;
	cout<<"Volume of rectangle ="<<ob.volume(l,b,h2)<<"\n";
}

