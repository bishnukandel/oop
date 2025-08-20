#include <iostream>
using namespace std;

// Class template with two parameters
template <class T1, class T2>
class Pair {
    T1 first;
    T2 second;
public:
    Pair(T1 a, T2 b) {
        first = a;
        second = b;
    }

    void display() {
        cout << "First: " << first << ", Second: " << second << endl;
    }
};

int main() {
    Pair<int, double> p1(10, 3.14);      // int and double
    Pair<char, string> p2('A', "Nepal"); // char and string
    Pair<string, int> p3("Hello", 100);  // string and int

    p1.display();
    p2.display();
    p3.display();

    return 0;
}
