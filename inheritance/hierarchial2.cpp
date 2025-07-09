#include<iostream>
using namespace std;
class staff
{
    int code;
    string name;
    public:
    void get1()
    {
        cout<<"eneter code"<<endl;
        cin>>code;
        cin.ignore();
        cout<<"enter name"<<endl;
        cin >> name;
        // getline(cin,name);
    }
    void display1()
    {
        cout<<"code     :"<<code<<endl;
        cout<<"name     :"<<name<<endl;
    }
};
class teacher : public staff
{
    string subject;
    int salary;
    public:
     void get2()
    {
        cout<<"eneter subject"<<endl;
        cin >> subject;
        // getline(cin,subject);
        cout<<"enter salary"<<endl;
        cin>>salary;
        cin.ignore();
    }
    void display2()
    {
        cout<<"subject"<<subject<<endl;
        cout<<"salary"<<salary<<endl;
    }
};
class typist : public staff
{
    float speed;
    public:
     void get3()
    {
        cout<<"enter speed"<<endl;
        cin>>speed;
        cin.ignore();
    }
    void display3()
    {
        cout<<"speed"<<speed<<endl;
    }
};
int main()
{
    teacher t;
    typist s;
    t.get1();
    t.get2();
    s.get1();
    s.get3();
    t.display1();
    t.display2();
    s.display3();
    return 0;
}
