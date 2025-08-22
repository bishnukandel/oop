
#include <iostream>
using namespace std;
// writing data in text format
int main()
{
    /// create and open file in write mode
    ofstream w; //(outoput file stream for write mode)
    w.open("hello.txt");

    string name = "hello world";
    int roll = "14";
    // ram to memory
    cout << name << endl;
    cout << roll < endl;
    // ram to file
    /// writing data to file
    w << name << endl;
    w << roll << endl;
    return 0;
}
int main()
    /// open the file in read mode

    /// file ma vako data lai ram ma lyaune

    ifstream r;
r.open("hello.txt");
string a, b;
int c;
/// reading datra from file
r >> a >> b >> c;
/// displaying data to minitor
cout << "favorite book" << a << endl;
cout << "luckey number" << c << endl;