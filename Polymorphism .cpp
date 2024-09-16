#include <iostream>
using namespace std;
class Test
{
   private:
   int n;
   public:
   void in()
   {
     cout<<"Enter number"<<endl;
     cin>>n;
          }
     void out()
     {
        cout<<"n="<<n<<endl;
        }
        };
int main () 
{
    Test *ptr;
    ptr=new Test;
    ptr->in();
    ptr->out();
    return 0;
}
