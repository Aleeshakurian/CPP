#include<iostream>
#include<cstring>
using namespace std;
class strng
{
	char str1[20];
	char str2[20];
	public:
	strng(char *s1,char *s2)
	{ 
		strcpy(str1,s1);
		strcpy(str2,s2);
	}
	void copy()
	{

		strcpy(str1,str2);
		cout<<"Copied string str1=";
		cout<<str1;
		cout<<"\n";
	}
	void concat()
	{
		strcat(str1,str2);
		cout<<"concatenated  string str1=";
		cout<<str1; 
		cout<<"\n";
	}
	void display()
	{
		cout<<str1<<"\n"<<str2<<"\n";
	}
};
main()
{
	cout<<"Two strings are:\n";
	strng s("hai","hello");
	s.display();
	s.copy();
	s.concat();
}


