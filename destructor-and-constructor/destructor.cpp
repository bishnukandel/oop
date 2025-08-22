/* destructor((object ko life sakida destructor call hunxa))

-->special type member function that will be automatically called 
--> name same as class name
--> public section
-->no return type

differences
--> called when an object is destroyed.
-->when the life of object ends.
-->doesn't accept argument 
-->no destructor overloading
-->use tilde(~)sign beofre destructor

General use: 
-->free up memory.free up resources
-->clean upn activities
-->deallocate memory which are allocated dynamically
*/ 

#include<iostream>
using namespace std;
class ninja
{
    public:
    ninja(){
    cout<<"I am constructor"<<endl;
    }
    ~ninja(){   // destructor is denoted by    (  ~ )
    cout<<" i am destructor."<<endl;
    }
};
void fun()
{
    cout<<"good girls"<<endl;
    ninja b;
    cout<<"today is friday"<<endl;
}

int main()
{
    cout<<"good afternoon"<<endl;
    ninja a;
    cout<<"good boys"<<endl;
    fun();
    cout<<"lets party"<<endl;
    return 0;
}
