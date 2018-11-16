#include<iostream>
using namespace std;
#define size 100
class stack
{
  private:
  int stck[size];
 int tos;
public:
   stack()
{
  tos=0;
  cout<<"stack initialized"<<" ";
  }

   ~stack()
    {
      cout<<"stack destroyed"<<"\n";
}

    int push(int i);
int pop();
};
int stack::push(int i)
{
if(tos==size)
 {
  cout<<"stack is full";
 
 }
stck[tos]=i;
tos++;
}
int stack ::pop()
{
if(tos==0)
  {
 cout<<"stack underflow"<<"\n";
 
}
tos--;
return stck[tos];
}
main()
{
stack a,b;
a.push(1);
b.push(2);
a.push(3);
b.push(4);
cout<<a.pop()<<" ";
cout<<a.pop()<<" "; 
}
