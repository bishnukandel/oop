#include<iostream>
using namespace std;
/*
NOTE:
if class is source (known)-> use operator function method
if calss is destination (unkonwn)-> use constructor method
*/
/*
source:meter(class type)
destination:cm(basic type)
*/

class length
{
    float meter;
    public:
    length()
    {
        cout<<"enter length in meters"<<endl;
        cin>>meter;
    }
    ///operaotr function
    operator float()
    {
        float cm=meter*100;
        return cm;
    }
};
int main()
{
    float cm;
    length l;
    cm=l;
    cout<<"length ="<<cm<<"cm"<<endl;
    return 0;
}