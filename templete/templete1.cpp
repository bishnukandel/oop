#include<iostream>
using namespace std;

template<class hi>
class hello{
    hi x;
    hi y;
    public:
    void get(hi a, hi b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<x<<endl;
        cout<<y<<endl;
    }
};
int main ()
{
    hello<int> w1;
    w1.get(2,5);
    w1.display();
    hello<float>w2;
    w2.get(3.4,5.6);
    w2.display();
    return 0;
}