#include<iostream>
#include<fstream>
using namespace std;

class student
{
private:
int rollno;
char name[20];
int total;
public:
void getdata()
{
cout<<"Enter roll number\t"<<"\n";
cin>>rollno;
cout<<"Enter student name\t"<<"\n";
cin>>name;
cout<<"Total Mark\t"<<"\n";
cin>>total;
}
void putdata()
{
cout<<"Roll No.:"<<rollno<<"\n";
cout<<"Name :"<<name<<"\n";
cout<<"TotalMark :"<<total<<"\n";
}
};
main()
{
cout<<"C++ FILES \n------------------";
cout<<"\n";
student st,st1;
st.getdata();
ofstream outfile("mark.doc");
outfile.write((char*)&st,sizeof(st));
outfile.close();
cout<<"***Display file***\n";
ifstream infile("mark.doc");
infile.read((char*)&st1,sizeof(st));
st1.putdata();
}
