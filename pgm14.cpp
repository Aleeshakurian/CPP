#include<iostream>
using namespace std;
class base
{
	public:
		virtual void vfun()
		{
			cout<<"This is base's vfun()\n";
		}
};
class derived1:public base
{
	public:
		void vfun()
		{
			cout<<"Dreived1's vfun()\n";
		}
};
class derived2:public base
{
	public:
		void vfun()
		{
			cout<<"Dreived2's vfun()\n";
		}
};
main()
{
	base *p,b;
	derived1 d1;
	derived2 d2;
	p=&b;
	p->vfun();
	p=&d1;
	p->vfun();
	p=&d2;
	p->vfun();
}
