#include<iostream>
using namespace std;

class weight
{
    float kg;
    public:
    weight()
    {
    }
    weight(int gram)
    {
        kg=gram/1000;
    }
    void display()
    {
        cout<<"weight="<<kg<<"kg"<<endl;
    }
};
int main()
{
    float gram;
    cout<<"enter gram"<<endl;
    cin>>gram;
    weight w;
    w=gram;
    w.display();
    return 0;
}