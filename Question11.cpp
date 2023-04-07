#include<iostream>
using namespace std;
class counter
{
    private:
     static int count;
     public:
     counter()
     {
        count++;
     }
     int getcount()
     {
        return count;
     }


};
 int counter:: count;
int main()
{
    counter c1,c2,c3;
    cout<<c1.getcount();
    cout<<"\n";
    return 0;

}