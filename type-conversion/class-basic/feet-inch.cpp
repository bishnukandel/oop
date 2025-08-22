#include<iostream>
using namespace std;

class measure
{
    float feet;
    public:
    measure()
    {
        cout<<"enter feet"<<endl;
        cin>>feet;
    }
    operator float() 
    {
        float inch=feet*12;
        return inch;
    }
};
int main()
{
    float inch;
    measure m;
    inch=m;
    cout<<"measure="<<inch<<"inch"<<endl;
    return 0;
}
