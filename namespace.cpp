///namespace



//first method
#include <iostream>
using namespace std;
//creating namespace sero
namespace aero
{
    void fly()
    {
        cout << "i want to fly areoplane" << endl;
    }
}
//creating namespace kite
namespace kite
{
    void fly()
    {
        cout << "i want ot fly kite" << endl;
    }
}
int main()
{
    aero ::fly();
    kite :: fly();
    return 0;
}


//second method

using namespace aero;
int main()
{
    fly(); ///calls fly of aero namespaace
    cout<<a <<endl;   ///display of aero namespace
    kite::fly();
    return 0;
}