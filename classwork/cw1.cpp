//wap to add two integers and floating point numbers using templete function

#include<iostream>
using namespace std;

template<class bishnu>
void hello(bishnu a ,bishnu b)
{
    cout<<"sum="<<a+b<<endl;
}
int main()
{
    hello(5,6);
    hello(5.3,3.5);
    return 0;
}