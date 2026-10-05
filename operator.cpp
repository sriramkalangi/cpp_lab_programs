// #include<iostream>
// using namespace std;
// class Student 
// {
//     public:
//     int marks;
//     Student operator +(Student s)
//     {
//         Student temp;
//         temp.marks=marks+s.marks;
//         return temp;
//     }
//     void display(){
//         cout << "student marks total is: " <<marks;

//     }

// };
// int main()
// {
//     Student s1,s2,s3;
//     s1.marks=67;
//     s2.marks=89;
//     s3=s1+s2;
//     s3.display();
//     return 0;
// }
#include<iostream>
using namespace std;
class Student
{
    public:
    int marks;
    Student(int m):marks(m){  }
    Student operator +(Student s){
        return Student(marks+s.marks);
    }
    void display(){
        cout <<"Student total marks"<<marks;
}
};
main()
{
    Student s1(67),s2(76);
    Student s3=s1+s2;
    s3.display();
}
