#include<iostream>
using namespace std;
class Student
{
    public:
    int sid;
    void getSid()
    {
        cout << sid;
    }
    void show(Student s){
        cout << "object as a parameter" << s.sid;
    }
    void showDetails(){
        Student s1;
        s1.id=111;
        return s1;
    }
    class Course{
        void coursedatatails(){
            cout << " nested class called course";
        }
    }
};