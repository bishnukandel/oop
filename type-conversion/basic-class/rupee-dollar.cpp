#include<iostream>
using namespace std;

class money
{
    float dollar;
    public:
    money()
    {

    }
    money (float rupee)
    {
        dollar=rupee/133;
    }
    void display()
    {
        cout<<"money"<<"$"<<dollar<<endl;
    }
};
int main()
{
    float rupee;
    cout<<"enter amt in rupee"<<endl;
    cin>>rupee;
    money m;
    m=rupee;
    m.display();
    return 0;
}