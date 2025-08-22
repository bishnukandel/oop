#include<iostream>
using namespace std;

class distance
{
    int cm;
    public:
    distance()
    {
    }
    distance(int meter)
    {
        cm=meter*100;
    }
    void display()
    {
        cout<<"distance="<<cm<<"cm"<<endl;
    }
};
int main()
{
    float meter;
    cout<<"enter meter"<<endl;
    cin>>meter;
    distance d;
    d=meter;
    d.display();
    return 0;
}