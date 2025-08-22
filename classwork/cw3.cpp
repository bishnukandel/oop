// wap to interchange the value of two integers, two floating point numbers and two charaacters using templete function

#include<iostream>
using namespace std;

template<class bishnu>
void hello( bishnu a, bishnu b)
{
    cout<<"before swapping "<<a<<endl;
    cout<<"before swapping"<<b<<endl;
    bishnu temp=a;
    a=b;
    b=temp;
    cout<<"after swapping"<<a<<endl;
    cout<<"after swapping"<<b<<endl;
}
int main()
{
    hello(5,2);
    hello(2.4,4.5);
    hello('a','b');
    return 0;
}