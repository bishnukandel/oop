///Encapsulation

//the process of hiding the data is known as Encapsulation
//baherw batw acces garnw na paos vanerw ( data member )lai rakhne
//it is an data hiding principle
//data member lai privae ma rakhyo vane encapsulation follow hunxa

#include<iostream>
using namespace std;
class person{
    string name;   //data member
    int id;        // data member

    public :
    void getdata()
    {
        cout<<"enter name and id";
        cin>>name>>id;
    }
    void display()
    {
        cout<<"enter name and id";
        cin>>name>>id;
    }
};
int main()
{
    person p; ///p is an object
    p.getdata(); ///call member function getdata()
    p.display();
    return 0;
}