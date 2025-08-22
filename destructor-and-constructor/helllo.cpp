#include<iostream>
using namespace std;
class a{
    public:
    a(){
        cout<<"a"<<endl;
    }
    ~a(){
        cout<<" d.a"<<endl;
    }

};
class b {
    public:
    b(){
        cout<<"b"<<endl;
    }
    ~b(){
        cout<<" d.b"<<endl;
    }
};
class c:public b, public a{
    public:
    c(){
        cout<<"c"<<endl;
    }
    ~c(){
        cout<<" d.c"<<endl;
    }
};
int main()
{
    c c;
    return 0;
}