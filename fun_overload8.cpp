#include<iostream>
using namespace std;
class shape
{
private:
int s,r,h,l,b,h2;
public:
void read();
void volume(int);
float volume(float,int);
void volume(int,int,int);
void display();
};
void shape::read()
{
cin>>s;
cin>>r>>h;
cin>>l>>b>>h2;
}

void shape::volume(int a)
{
int v1;
v1=a*a*a;

}

