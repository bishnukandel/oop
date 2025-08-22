//convert kg to gram
///constructor method
#include<iostream>
using namespace std;

class weightS{
    float kg;
    public:
    void get()
    {
        cout<<"enter weight in kg."<<endl;
        cin>>kg;
    }
    float getkg(){
        return kg;
    }
};  
class weightD{
    float gm;
    public:
    weightD()   
    {

    }
    weightD(weightS ws){
        float kg=ws.getkg();
        gm=kg*1000;
    }
    void display()
    {
        cout<<"after conversion ,weight="<<gm<<endl;
    }
};
int main()
{
    weightS ws;
    ws.get();
    weightD wd;
    wd=ws;
    wd.display();
}

// convert inch to feet using class type to class type conversion..
