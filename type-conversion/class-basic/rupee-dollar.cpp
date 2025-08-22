#include<iostream>
using namespace std;
 
class money
{
    float rupee;
    public:
    money()
    {
        cout<<"enter amount in rupee"<<endl;
        cin>>rupee;
    }
    operator float()
    {
        float dollar=rupee/133;
        return dollar;
    }
};
int main()
{
    float dollar;
    money m;
    dollar=m;
    cout<<"money="<<dollar<<"$"<<endl;
    return 0;
}