#include<iostream>
using namespace std;
class Counter
{
    private:
     int count;
     public:
      Counter()
      {
        count=0;

      }
      void  inc_count()
      {
        count++;
      }
      int getcount()
      {
        return count;
      }

};
int main()
{
    Counter c1;
    cout<<"\nBefore calling counter function ,count =";
    cout<<c1.getcount();
    c1.inc_count();
    cout<<"\nAfter calling counter function ,count = ";
    cout<<c1.getcount();
    cout<<endl;
    return 0;



}