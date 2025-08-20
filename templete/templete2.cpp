#include<iostream>
using namespace std;

///   Templete Fucntion 
//--> handles by type of data
template<class bishnu>
void concentrate(bishnu a, bishnu b)
{
    cout<<a<<endl;
    cout<<b<<endl;

}
int main()
{
    concentrate(5,7);
    concentrate('a','h');
    concentrate(4.5,5.2);
    concentrate("nepal","bharatpur");
    return 0;
}