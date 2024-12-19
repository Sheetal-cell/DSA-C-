//List in Standard Template Library in C++

#include <iostream>
#include<list>
using namespace std;

int main()
{
    list<int>l;
    l.push_back(1);
    l.push_front(2);
    for(int i:l)
    {
        cout<<i<<" "; //2 1
    }
    cout<<endl;

    cout<<"Size of list before erase:"<<l.size()<<endl; //2

    l.erase(l.begin());
    cout<<"Elements in list after erase:"<<endl;
    for(int i:l)
    {
        cout<<i<<" "; //1
    }
    cout<<endl;
    cout<<"Size after erase:"<<l.size()<<endl; //1

    list<int>n(5,100);
    cout<<"Printing n"<<endl;
    for(int i:n)
    {
        cout<<i<<" "; //100 100 100 100 100
    }
    cout<<endl;

}
