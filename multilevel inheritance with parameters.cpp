#include<iostream>
using namespace std;
class person
{
protected:
int id;
char name[50],addresses[100];
public:
person(){
id=0;
name[0]='0';
address[0]='0';
void input()
{cout<<"enter your id";
cin>>id;
cout<<"enter your name";
cin>>name;
cout<<"enter your address";
cin>>name;
}
void output()
{
cout<<personal information;
cout<<id<<endl;
cout<<name<<endl;
cout<<address<<endl;
}};
class student:public person 
{private:
int roll number,marks;
public:
student()
{
person::person();
roll number =marks=0;
}
void input()
{
person::input()
cout<<"enter your roll number\n";
cin>>roll number;
cout<<"enter your marks\n";
cin>>marks;
}
void output()
{
person::output();
cout<<"educational information\n";
cout<<"roll number\n";
cout<<"marks\n";
}};
class scholarship:public student 
{private:
char sname[50]; 
long amount;
public:
void input()
{
student::input();
cout<<"enter scholarship name\n";
cin>>sname;
cout<<"enter scholarship amount";
cin>>amount;
}
void output()
{
student::output();
{
student::output();
cout<<"schoo information\n";
cout<<"scholarship name<<sname\n";
cout<<scholarship amount<<amount\n;
}
};
int main()  
{
scholarship obj;
obj.input();
obj.output();
return 0;
}
