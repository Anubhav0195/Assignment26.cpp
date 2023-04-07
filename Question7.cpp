#include<iostream>
using namespace std;
class Box
{
    private:
    double length,breadth,height;
    public:
    Box(int l,int b,int h)
    {
        length=l;
        breadth=b;
        height=h;
    }
    double volume()
    {
        return (length*breadth*height);
    }

};
int main()
{
    Box b1(8,5,3);
    cout<<b1.volume();
    return 0;

}