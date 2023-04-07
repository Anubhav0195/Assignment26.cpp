#include<iostream>
using namespace std;
class cube
{
    public:
      double side;
      double volume()
      {
        return (side*side*side);
      }
      
      cube()
      {
        cout<<"\n A default constructor is called"<<endl;
      }
      cube(double side1)
      {
        cout<<"\n A constructor is called"<<endl;
        side=side1;
        }

      

};
int main()
{
    cube c1(2.34);
    cube c2;
    cout<<"\n side of a cube is:"<<c1.side<<endl;
    cout<<"Volume of the first cube is:"<<c1.volume()<<endl;
    cout<<"Enter the side of the second cube"<<endl;
    cin>>c2.side;
    cout<<"volume of the second cube is:"<<c2.volume()<<endl;
    return 0;



}