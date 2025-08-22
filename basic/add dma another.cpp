#include<iostream>
using namespace std;
int main()
{
    int *a,*b,*sum;
    a=new int;
    b=new int;
    sum=new int;
    cout<<"enter any two number";
    cin>>*a>>*b;
    *sum=*a+*b;
    cout <<"sum="<<*sum<<endl;
    delete a,b,sum;
    return 0;
}