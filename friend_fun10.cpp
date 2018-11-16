#include<iostream>
using namespace std;
class myclass
{
 private:
int a,b;
public:
friend int sum(myclass x);
void set_ob(int i,int j);
};
void myclass::set_ob(int i,int j)
{
a=i;
b=j;
}
int sum(myclass x)
{
int s;
s=x.a+x.b;
return s;
}
main()
{
 myclass n;
n.set_ob(6,4);
cout<<"sum="<<sum(n);
}
