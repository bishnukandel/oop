#include<iostream>
using namespace std;
class apple
{
    int num;
    public:
    void get()
    {
        cout<<"enter the number"<<endl;
        cin>>num;
    }
    void display()
    {
        cout<<"number="<<num<<endl;
    }
    int operator<(apple b)
    {
        if(num<b.num){
            cout<<"smallest="<<num<<endl;
        }
        else{
        cout<<"smallest="<<b.num<<endl;
        }
    }
};
int main()
{
    apple a,b,c;
    a.get();
    b.get();
    a<b;    /// a.operator +(b);
    return 0;
}