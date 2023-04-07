#include<iostream>
using namespace std;
class Bank
{
    private:
     double principle,rate,year;
     public:
     Bank(int p,float r,int y)
     {
        principle=p;
        rate=r;
        year=y;
     }
     double Simple_interest()
     {
        return (principle*rate*year)/100;
     }
};
int main()
{
    Bank b1(1200,5.5,5);
    cout<<b1.Simple_interest();
    return 0;

}