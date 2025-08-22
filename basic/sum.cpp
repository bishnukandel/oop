///wap that ask the user to input 5 numbers and print their sum

//using sma
#include<iostream>
using namespace std;
int main()
{
    int a[5];
    cout<<"enter any five number";
    for(int i=0;i<5;i++)
    {
    cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    cout<<"sum="<<sum<<endl;
    return 0;
}

///using dma

int main()
{
    int *a;
    a=new int[5];
    ///other same
    //// a[i] ko thau ma *(a+i)
}

//syntax
int main() 
{
    int *a;
    a=new int[5];   // 20- byte memory is allocated using dma
    delete[] a;      ///free up memory
    return 0;
}