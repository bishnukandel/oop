
/// composition/container

#include <iostream>
using namespace std;

class Apple
{
public:
    void eat()
    {
        cout << "eat apple" << endl;
    }
};
class ball // container class
{
    Apple a;

public:
    void play()
    {
        a.eat();
        cout << "play ball " << endl;
    }
};
int main()
{
    ball b;
    b.play();
    return 0;
}