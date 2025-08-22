//pass by address` / pass by pointer
#include<iostream>
using namespace std;
void fun(int *x)
{
    *x=10;
}
int main()
{
    int a=5;
    fun(&a);
    cout<<a<<endl;
    return 0;
}
//pass by value 
#include<iostream>
using namespace std;
void fun(int x)
{
    x=10;
}
int main()
{
    int a=5;
    fun(a);
    cout<<a<<endl;
    return 0;
}
// pass by refernece
#include<iostream>
using namespace std;
void fun(int &x)
{
    x=10;
}
int main()
{
    int a=5;
    fun(a);
    cout<<a<<endl;
    return 0;
}
