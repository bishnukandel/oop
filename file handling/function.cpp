/*
    get()
   -->reading data from a file character by character

   put()
   --> writing data to a file character by __cpp_unicode_characters
   */
#include<iostream>
#include<fstream>
using namespace std;
   int main()
{
    char a[]="i wanna be good programmer";
    int length=strlen(a);
    ofstream w;
    w.open("bishnu.txt");
    int i=0;
    while(i<length)
    {
        w.put(a[i]);
        i++;
    }
    w.close();
    return 0;
}
