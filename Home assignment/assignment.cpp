#include<iostream>
using namespace std;
class person{
    string name;
    string address;
    public:
    void get1()
    {
        cout<<"enter name "<<endl;
        getline(cin,name);
        cout<<"enter address"<<endl;
        getline(cin,address);
    }
    void display()
    {
        cout<<"name     :"<<name<<endl;
        cout<<"address  : "<<address<<endl;
    }
};
class student:public person
{
    int roll;
    float percentage;
    public:
    void get2()
    {
        cout<<"enter roll"<< endl;
        cin>>roll;
        cin.ignore();
        cout<<"enter percentage"<<endl;
        cin>>percentage;
        cin.ignore();
    }   
    void display()
    {
        cout<<"roll     :"<<roll<<endl;
        cout<<"percentage:"<<percentage<<endl;
    }
};
class teacher : public person{
    int id;
    string subject;
    public:
    void get3()
    {
        cout<<"enter id "<<endl;
        cin>>id;
        cin.ignore();
        cout<<"enter subject"<<endl;
        getline(cin,subject);
    }
    void display()
    {
        cout<<"id       : "<<id<<endl;
        cout<<"subject  : "<<subject<<endl;
    }
};
int main()
{
    student s;
    teacher t;
    s.get1();
    s.get2();
    t.get1();
    t.get3();
    s.person::display();
    s.display();
    t.person::display();
    t.display();
    return 0;

}