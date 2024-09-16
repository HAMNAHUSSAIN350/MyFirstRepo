#include <iostream>
using namespace std;
class Parent
{
   protected:
   int n;
   };
 class Child1:  virtual public Parent
 {
        };
class Child2:  virtual public Parent 
{
        };
class Baby: public Child1, public Child2
{
    public:
    void setdata()      
    {
       n=10;
       cout<<"n="<<n<<endl;
       }
       };
int main () 
{ 
     Baby b;
     b.setdata();
    return 0;
}
