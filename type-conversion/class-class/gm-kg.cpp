// operator function method
//gm to kg

#include<iostream>
using namespace std;
class weightD{
    float kg;
    public:
    void setkg(float k)
    {
        kg=k;
    }
    void display()
    {
        cout<<"after conversion"<<kg<<endl;
    }
};
class weightS{
    float gm;
    public:
    void get()
    {
        cout<<"enter weight in gram"<<endl;
        cin>>gm;
    }
    operator weightD()
    {
        float k=gm/1000;
        weightD temp;
        temp.setkg(k);
        return temp;
    }
};
int main()
{
    weightS ws;
    ws.get();
    weightD wd;
    wd=ws;
    wd.display();
    return 0;
}




///convert meter inton centimeter using operator function method(class type to class type)