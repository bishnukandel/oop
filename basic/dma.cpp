#include<iostream>
using namespace std;
int main()
{
    int *p;
    p=new int;    // 4 bytes memory is allocated dynamically
    int a; ///sma
    delete p;   ///free up memory /// de allocation  
    return 0;
}