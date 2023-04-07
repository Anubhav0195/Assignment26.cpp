#include<iostream>
using namespace std;
class Time
{
    private:
    int HR,MIN,SEC;
    public:
    void settime(int x,int y,int z)
    {
        HR = x;
        MIN = y;
        SEC = z;
    }
    void showtime()
    {
        cout<<endl<<HR<<":"<<MIN<<":"<<SEC;

    }
    void normalize()
    {
        MIN=MIN+SEC/60;
        SEC=SEC%60;
        HR=HR+MIN/60;
        MIN=MIN%60;

    }
    Time add(Time t)
    {
        Time temp;
        temp.SEC=SEC+t.SEC;
        temp.HR=HR+t.HR;
        temp.MIN=MIN+t.MIN;
        temp.normalize();
        return temp;
    }

};
int main()
{
    Time T1,T2,T3;
    T1.settime(12,45,78);
    T2.settime(9,78,89);
    T3=T1.add(T2);
    T3.showtime();
    return 0;

}
