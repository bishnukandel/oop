#include<iostream>
using namespace std;
class a{
    public:
    char w;
    void get1()
    {
        cout<<"enter w"<<endl;
        cin>>w;
    }
    void display()
    {
        cout<<"value of w="<<w<<endl;
    }
};
class b : virtual public a{
    public:
    char x;
    void get2()
    {
        cout<<"enter x"<<endl;
        cin>>x;
    }
    void display2()
    {
        cout<<"value of x="<<x<<endl;
    }
};
class c :virtual public a{
       public:
    char y;
    void get3()
    {
        cout<<"enter y"<<endl;
        cin>>y;
    }
    void display3()
    {
        cout<<"value of y="<<y<<endl;
    }
}; 
class D:public b, public c{
    public:
    char z;
    void get4()
    {
        cout<<"enter z"<<endl;
        cin>>z;
    }
    void display4()
    {
        cout<<"value of z="<<z<<endl;
    }
};
int main()
{
    D d;
    d.get1();
    d.get2();
    d.get3();
    d.get4();

    d.display();
    d.display2();
    d.display3();
    d.display4();
    return 0;

}

