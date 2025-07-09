#include<iostream>
using namespace std;
class person{
    public:
    string name;
    void get1()
    {
    cout<<"enter the name"<<endl;
    cin>>name;
    }
    void display()
    {
        cout<<"name:"<<name<<endl;
    }
};
class student: public person{
    public:
    int roll;
     void get2()
    {
    cout<<"enter the roll"<<endl;
    cin>>roll;
    }
    void display()
    {
        person:: display();
        cout<<"roll"<<roll<<endl;
    }
};
class teacher : public person{
    public:
    string subject;
     void get3()
    {
    cout<<"enter the subject"<<endl;
    cin>>subject;
    }
    void display()
    {
        person::display();
        cout<<"subject"<<subject<<endl;
    }
};
int main()
{
    student s;
    teacher t;
    s.get1();
    s.get2();
    s.display();
    t.get1();
    t.get3();
    t.display();

    return 0;

}