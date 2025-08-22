// convert feet and inches into meter and centimeter.

#include<iostream>
using namespace std;

class length
{
    float feet;
    float inches;
    public:
    length()
    {
        cout<<"enter feet and inches"<<endl;
        cin>>feet;
        cin>>inches;
    }
    operator float()
    {
        float f=feet+inches/12;
        float m=f/3.3;
        return m;
    }
};
int main()
{
    float meter;    
    length l;
    l.get();
    meter=l;
    int m=int(meter);
    float cm=(meter-m)*100;
    cout<<"ater conversion, length ="<<m<<"meter and"<<cm<<"cm"<<endl;
    return 0;
}