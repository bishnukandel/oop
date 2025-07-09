#include<iostream>
using namespace std;
class author
{
    string name;
    string qualification;
    public:
    void getdata()
    {
        cout<<"name"<<endl;
        cin>>name;
        cout<<"qualification"<<endl;
        cin>>qualification;
    }
    void putdata()
    {
        cout<<"name is      :"<<name<<endl;
        cout<<"qualification:"<<qualification<<endl;
    }
};
class publication 
{
    string pname;
    public:
    void getdata()
    {
        cout<<"pname"<<endl;
        cin>>pname;
    }
    void putdata()
    {
        cout<<"pname"<<pname<<endl;
    }
};
class book : public author,public publication
{
    string title;
    int price;
    public:
    void getdata()
    {
        author::getdata();
        publication::getdata();
        cout<<"title"<<endl;
        cin>>title;
        cout<<"price"<<endl;
        cin>>price;
    }
    void putdata()
    {
        author::putdata();
        publication::putdata();
        cout<<"title"<<title<<endl;
        cout<<"price"<<price<<endl;
    }
};
int main()
{
    book a;
    a.getdata();
 
    a.putdata();

    return 0;
}