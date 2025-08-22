#include<iostream>
using namespace std;
class DC
{
    int *ptr;
    public:
    DC(){
        ptr=new int;
        cout<<"Memory allocated dynamically"<<endl;
    }
    ~DC()
    {
        delete ptr;
        cout<<"memory released"<<endl;
    }
};
int main()
{
    DC obj;
    return 0;
}