#include<iostream>
using namespace std;

class ninja
{
    int power;
    public:
    ninja()     ///default constructor
    {
        power=2;
    }
    ninja(ninja &hatodi)      ///copy constructor
    {
        power=hatodi.power;
    }
    void display()
    {
        cout<<"power="<<power<<endl;
    }
};
int main()
{
    ninja a;
    ninja b(a);        /// it calls copy constructor
    b.display();      ///prints power=2
    return 0;
}
///   can a constructor accept object as an argument? justify??