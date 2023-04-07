#include<iostream>
using namespace std;
class Date
{
    private:
     int dd,mm,yy;
    public:
      Date(int x,int y,int z)
      {
        dd=x;
        mm=y;
        yy=z;
      }
      void display()
      {
        cout<<"The entered date is:";
        cout<<dd<<"-"<<mm<<"-"<<yy;
      }
};
int main()
{
    Date d1(15,7,2023);
    d1.display();
    return 0;
}