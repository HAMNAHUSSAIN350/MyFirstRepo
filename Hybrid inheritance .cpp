#include <iostream>
using namespace std;
 class  student
{protected:
int rollno;
public:
void get_number(int a)
{
rollno=a;}
void put_number()
{
cout<<"ROLL NO"<<rollno<<endl;
}
};
class test : public student
{
protected:
float part1;
float part2;
public:
void get_marks(float x,float y)
{ 
part1=x;
part2=y;
}
void put_marks()
{
cout<<"MARKS OBTAINBED"<<endl;
cout<<"PART 1 :"<< part1<<endl;
cout<<"PART 2 :"<<part2<<endl;
}
};
class sports 
{ protected:
float score;
public:
void get_score(float s)
{
score=s;}
void put_score ()
{
cout<<"SCORE"<<score<<endl;}
};
class result: public test,public sports
{
float total;
public:
void display ()
{
total=part1 + part2 + score;
put_number();
put_marks();
put_score();
cout<<"total score"<<total<<endl;
}
};
int main()
{
result student_1;
student_1.get_number(35);
student_1.get_marks(29.5,30.0);
student_1.get_score(50.0);
student_1.display ();
}
