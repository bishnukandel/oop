
//a catch block that can catch any type of exception.

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter a number"<<endl;
    cin>>num;
try{
    if(num==1)
    {
        throw num;
    }
    else if(num==2)
    {
        throw char(num);
    }
    else
    {
        cout<<"apple"<<endl;
    }
}
    catch(int e)
{
    cout<<"hello"<<endl;
}
return 0;
}