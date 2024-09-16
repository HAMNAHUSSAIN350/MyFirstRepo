#include <iostream>
using namespace std;
class A
{
   public:
   void show()
   {
     cout<<"A"<<endl;
     }
          };
 class B: public A 
 {
     public:      
     void show()
     {
        cout<<"B"<<endl;
        }
        };
class C: public A
{
      public:
      void show()
      {
       cout<<"C"<<endl;
       }
        };
int main () 
{ 
     A a;
     B b;
     C c;
     A *ptr;
     ptr=&a;
     ptr->show();
     ptr=&b;
     ptr->show();
     ptr=&c;
     ptr->show();
    return 0;
}
