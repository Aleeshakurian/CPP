#include<iostream>
using namespace std;
class point
{
 private :
int x,y;
public:
point()
{
x=2;
y=4;
}
point(int a,int b)
{
x=a;
y=b;
}
/*point (point &p)
{
x=p.x;
y=p.y;
}*/
void read()
{
cin>>x>>y;
}
void display()
{
cout<<x <<"  "<<y<<"\n";
}
void add(point);

};
void point::add(point pt)
{

point t;
t.x=x+pt.x;
t.y=y+pt.y;
return t;
}



main()
{
point p1,p2,p3;
p1.display();
p2.display();
p3=p1.add(p2);
p3.display();
}




