#include<iostream>
using namespace std;
class apple
{
    int num;
    public:
    void get()
    {
        cout<<"enter a num"<<endl;
        cin>>num;
    }
    void display()
    {
        cout<<"num="<<num<<endl;
    }
    /// operator overloading function
    void operator-()
    {
        num=-num;
    }
};
int main()
{
    apple a;
    a.get();
    a.display();  //5
    -a;  //a.operator-();
    a.display();  //-5
    return 0;
}


#include<iostream>
using namespace std;
class apple
{
    int num;
    public:
    void get()
    {
        cout<<"enter a num"<<endl;
        cin>>num;
    }
    void display()
    {
        cout<<"num="<<num<<endl;
    }
    /// operator overloading function
    apple operator-()
    {
        apple temp;
        temp.num=-num;
        return temp;
    }
};
int main()
{
    apple a,b;
    a.get();
    a.display();  //5
    b= -a;  //a.operator-();
    a.display();  //-5
    return 0;
}