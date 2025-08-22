#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter a number";
    cin>>num;
    try
    {
        if(num==3)
        {
            throw num;
        }
        else
        {
            cout<<"valid number entered";
        }
    }
    catch(int e)
    {
        cout<<"exception 3 detected"<<endl;
    }
    return 0;
}