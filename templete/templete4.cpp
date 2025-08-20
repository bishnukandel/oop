//class templete

#include <iostream>
using namespace std;
template <class T>
class Box {
    T value;   
public:
    Box(T v) {   
        value = v;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};
int main() {
    Box<int> b1(10);        // T = int
    Box<double> b2(3.14);   // T = double
    Box<char> b3('A');      // T = char

    b1.display();
    b2.display();
    b3.display();

    return 0;
}
