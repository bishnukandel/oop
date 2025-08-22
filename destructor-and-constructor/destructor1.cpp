// use of destructor to release memory
#include<iostream>
using namespace std;
 class cct
 {
    int*p;
    public :
    cct()
    {
        p=new int;
        cout<<"memory allocated dynamically"<<endl;
    }
    ~cct()
    {
        delete p;
        cout<<"memory is released"<<endl;
    }
 };
 int main()
 {
    cct c;
    return 0;
 }