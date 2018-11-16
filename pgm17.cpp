#include<iostream>
#include<strstream>
using namespace std;
main()
{
	char iostr[80];
	strstream strio(iostr,sizeof(iostr),ios::in|ios::out);
	int a,b;
	char str[80];
	strio<<"10 20 testing";
	strio>>a>>b>>str;
	cout<<a<<" "<<b<<" "<<str<<endl;
}


