// templete function that can handle different data types in single funxtion call
#include<iostream>
using namespace std;
template<class apple, class ball>
void ninja(apple x, ball y)
{
    cout<<x<<endl;
    cout<<y<<endl;
}
int main()
{
    ninja(2,5.5);
    ninja('r',4);
    ninja(3,"nepal");
    return 0;
}