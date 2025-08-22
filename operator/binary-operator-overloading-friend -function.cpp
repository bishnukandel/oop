#include<iostream>
using namespace std;

class Apple
{
    int num;
    public:
    void get()
    {
        cout<<"enter a number"<<endl;
        cin>>num;
    }
    void display()
    {
        cout<<"number="<<num<<endl;
    }
    friend void operator + (Apple &a ,Apple b);
};
void operator + (Apple &a ,Apple b)   ///tala a.num rakherw & lekherko /// edi b.num lekheko va Apple &b hunthyo
{
    a.num=a.num+b.num; 
}
int main()
{
    Apple a,b;
    a.get();
    b.get();
    a+b;
    a.display();
    return 0;
}