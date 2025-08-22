// add two numbers using dma
#include<iostream>
using namespace std;
int main()
{
    int *a,*b,*sum;
    int *p;
    a=new int ;
    b=new int ;
    sum =new int;

    *a=5;
    *b=10;
    sum=*a+*b;
    cout<<"sum="<<sum<<endl;
    return 0;

}