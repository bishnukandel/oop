///Features/ Charactericstics of ststic member function
//can not access non static data member.
//can only access static data member.
//can be called with or without objects.












#include<iostream>
using namespace std;
class student
{
    string name;            // general D.M
    int roll;               // general D.M
    static int semester;    //static D.M
    
    public:
    static void get(int s){     ///static member function
       semester=s;
    }
    void display()
    {
        cout<<semester<<endl;
    }
};

// static data member defination

int  student :: semester;

int main()
{
    student a,b;
    a.get(5);
    b.display();  // static D.M is common to all objects so it prints --> 5
    return 0;
}