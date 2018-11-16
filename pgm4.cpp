#include<iostream>
using namespace std;
class distance
{
	int feet;
	float inch;
	public:
	distance()
	{
		feet=0;
		inch=0;
	}
	void read();
	void display();
	void add(distance,distance);
}d1,d2,d3;
void distance::read()
{
	cout<<"Enter feet and inch :";
	cin>>feet>>inch;
}
void distance::display()
{
	cout<<"feet="<<feet<<" ";
	cout<<"inch="<<inch<<" ";
}
void distance::add(distance a,distance b)
{
	feet=a.feet+b.feet;
	inch=a.inch+b.inch;
	if(inch>12)
	{
		feet++;
		inch=inch-12;
	}
}
main()
{
	d1.read();
	d2.read();
	d1.display();
	cout<<"\n";
	d2.display();
	d3.add(d1,d2);
	cout<<"\nSum of feet and inch is:\n";
	d3.display();
	cout<<"\n";
}

