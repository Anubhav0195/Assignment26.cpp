#include<iostream>
using namespace std;
class Student
{
    private:
    int marks;
    int rollno;
    public:
    Student(int m, int r)
    {
        marks=m;
        rollno=r;

    }
    void showdata()
    {
        cout<<"\n Marks ="<<marks<<endl;
        cout<<"\n RollNO. ="<<rollno<<endl;
    }

};
int main()
{
    Student s1(346,1),s2(670,2);
    cout<<"\nRecord od student 1............";
    s1.showdata();
    cout<<"\nRecord of student 2.............";
    s2.showdata();
    return 0;

}