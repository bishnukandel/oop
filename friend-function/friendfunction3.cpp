/// write a program to add time in hours and minutes of two different objects using friend function
//wap to add two complex number using friend function.

#include<iostream>
using namespace std;

class Time
{
    int hour; 
    int mins ; 
    public:

    Time()
    {
    cout<<"enter hours and minutes";
    cin>>hour>>mins;
    }
    friend void addtime();
};
void addtime()
{
    Time t1,t2;
    int hr=t1.hour+t2.hour;
    int min=t1.mins+t2.mins;
    if(min>=60)
    {
        hr++;
        min=min-60;
    }
    cout<<"after addition,time="<<hr<<"hr and"<<min<<"mins"<<endl;
}
int main()
{
    addtime();
    return 0;
}

/* if(min>=60)
{
hr=hr+min/60;8
min=min%60;
}*/