#include<iostream>
using namespace std;
void swap(int &a , int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    int x,y;
    cout<<"enter any two number";
    cin>>x>>y;
    cout<<"before swapping" ;
    cout<<"x="<<x<<",y="<<y<<endl;
    swap(x,y);
    cout<<"before swapping" ;
    cout<<"x="<<x<<",y="<<y<<endl;
    return 0;
}

