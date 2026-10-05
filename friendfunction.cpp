#include<iostream>
using namespace std;
class Student
{
    private:
    int id;
    friend void display(int, Student s);
};
void display(int sid,Student s)
{
    s.id=sid;
    cout <<" student id:" << s.id;
}
main()
{
    Student s1;
    display(22,s1);
}