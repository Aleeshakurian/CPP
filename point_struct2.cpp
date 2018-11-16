#include<iostream>
using namespace std;
struct point
{
	int x,y;
	public:
	void read();
	void display();
	point add(point);
}p1,p2,p3;
void point ::read()
{
	cin>>x>>y;
}

void point::display()

{
	cout<<x<<" "<<y<<"\n";
}
point point:: add(point p1)
{
	p3.x=x+p1.x;
	p3.y=y+p1.y;
	return p3;
}
main()
{
	//	point p1,p2,p3;
	cout<<"Enter first point\n";
	p1.read();
    	cout<<"Enter second point\n";
        p2.read();
 	cout<<"First and second point is\n";
	p1.display();
	p2.display();
	cout<<"sum is\n";						    p3=p2.add(p1);
	p3.display();
}
