#include<iostream>
using namespace std;
class employee


{
	int empno,i;
	char name[20];
	char dest[20];
	public:
	void read()
	{
		cout<<"Enter employee number,name and destination"<<"\n";
		cin>>empno;
		for(i=0;i<10;i++)
		{ 
			cin>>name[i]>>dest[i];
		}

		void display()
		{
			cout<<"Employee number="<<empno;
			cout<<"Name of employee";
			for(i=0;i<10;i++)
			{
				cout<<name[i];
			}
			cout<<"Destination is";
			for(i=0;i<10;i++)
			{
				cout<<dest[i];
			}
		};
		class salary:public employee
		{
			float ba,hra,da,pf,np;
			public:
			void calc()
			{
				cout<<"Enter ba,hra,da,pf\n";
				cin>>ba>>hra>>da>>pf;
				np=ba+hra+da-pf;
			}
		};
main()
{
 salary ob[5];
int i;
for(i=0;i<5;i++)
{ 
ob[i].read();
}
}
