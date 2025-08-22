#include<iostream>
using namespace std;
int a=5;
//return by rederence
int& fun()
{
    return a;
}
int main()
{
    cout<<a<<endl;      ///prints 5
    fun()=2;
    cout<<a<<endl;    //2
    return 0;
}