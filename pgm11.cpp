#include<iostream>
using namespace std;
class publisher
{
	char title[20];
	float  price;
	public:
	publisher()
	{
		price=0;
		title[20]=0;
	}
	void read()
	{
		cout<<"Enter title and price:";
		cin>>title>>price;
	}
	void display()
	{
		cout<<"Title:"<<title<<"\n";
		cout<<"Price :"<<price<<"\n";
	}
};
class book:public publisher
{
	int pagecount;
	public:
	book()
	{
		pagecount=0;
	}
	void bookread()
	{
		publisher::read();
		cout<<"Enter number of pages:";
		cin>>pagecount;
	}
	void bookdisplay()
	{
		cout<<".......DETAILS.........\n";
		publisher::display();
		cout<<"No. of pages:"<<pagecount<<"\n";
	}
};
class cd:public publisher
{
	int duration;
	public:
	cd()
	{
		duration=0;
	}
	void cdread()
	{
		publisher::read();
		cout<<"Enter duration :";
		cin>>duration;
	}
	void cddisplay()
	{
		publisher::display();

		cout<<"Duration of cd:"<<duration<<"\n";
		cout<<"\n";
	}
};
main()
{
	book b;
	cd c;
	b.bookread();
	c.cdread();
	b.bookdisplay();
	c.cddisplay();
}

