#include<iostream>
using namespace std;

template<class bishnu ,class kandel>

class hi{
    bishnu a;
    kandel b;
    public:
    void get( bishnu  a,kandel b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<x<<endl;
        cout<<y<<endl;
    }
};
int main()
{
    hi<int,float>w1;
    w1.get(2,5.5);
    w1.display();
    hi<char,int>w2;
    w2.get('yeahh',5);
    w2.display();
    return 0;
}