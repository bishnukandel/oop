#include<iostream>
using namespace std;


/*
int main()
{
    int num;
    cout<<"enter a number";
    cin>>num;
    try
    {
        if(num==3)
        {
            throw num;
        }
        else
        {
            cout<<"valid number detected"<<endl;
        }
    }
    catch (int e)
    {
        cout<<"exception number 3 detected"<<endl;
    }

    return 0;
}

*/

/*
int main()
{
    int a,b;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    try
    {
        if(b==0)
        {
            throw b;
        }
        else{
            cout<<"a/b"<<endl;
        }
    }
    catch(int e)
    {
        cout<<"divide by zero exception detected"<<endl;
    }
    cout<<"get"<<endl;
    cout<<"set"<<endl;
    cout<<"go"<<endl;
    return 0;
}
*/

// write a program example that has multiple catch blocks(exception handling with multiple catch blocks)


int main()
{
    int a,b;
    cout<<"enter two numbers other than 1,2,3"<<endl;
    cin>>a;
    try
    {
        if(a==1)
        {
            throw a;
        }
        else if(a==2){
            throw  float(a);
        }
        else if(a==3){
            throw  char(a);
        }
        else{
            cout<<"valid number entered"<<endl;
        }
    }
    catch(int e)
    {
        cout<<"integer 1 exception detected"<<endl;
    }
    catch(float e){
        cout<<" float exception detected"<<endl;
    }
    catch(char e)
    {
        cout<<"character exception detected"<<endl;
    }
    return 0;
}