#include <iostream>
#include <fstream>
using namespace std;

// file handling

int main()
{
    /// creating and opening file  in writing mode
    ofstream w;
    w.open("bishnu.txt");
    return 0;
}

// alternative method
 
/*
int main()
{
    ofstream w("ishwor.txt");
    return 0;
}
    */

// opening the file in reading mode

int main()
{
    ifstream r("bishnu.txt");
    r.close(); // closing
}


///read witre operation

/*
->text format (int ,char) 
        -->occupies more space
->binary format   
        --> occupies less space 
*/