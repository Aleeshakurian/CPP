#include<iostream>
#include<vector>
#include<cctype>
using namespace std;
main()
{
	vector<char>v(10);
	unsigned int i;
	cout<<"Size="<<v.size()<<endl;
	for(i=0;i<10;i++)
		v[i]=i+'a';
	cout<<"Current Elements\n";
	for(i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	cout<<"\n\n";
	cout<<"Expanding Vector:\n";
	for(i=0;i<10;i++)
		v.push_back(i+10+'a');
	cout<<"size new ="<<v.size()<<endl;
	cout<<"Current contents\n";
	for(i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	cout<<"\n\n";
	for(i=0;i<v.size();i++)
		v[i]=toupper(v[i]);
	cout<<"Modified Contents\n";
	for(i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	cout<<"\n\n";

}
