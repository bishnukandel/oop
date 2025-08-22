//wap to find the maximum of two integers ,floating point numbers and characters using templete function

#include<iostream>
using namespace std;

template<class bishnu>
void hello(bishnu a, bishnu b)
{
    if(a<b)
    {
        cout<<"max"<<b<<endl;
    }
    if(a>b)
    {
        cout<<"max"<<a<<endl;
    }   
};
int main()
{
    hello(2,3);
    hello(2.5,5.2);
    hello('e','c');
    return 0;
}