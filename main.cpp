//Deque in Standard Template Library in C++

#include <iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int>d;
    d.push_back(1);
    d.push_front(2);
    for(int i:d)
    {
        cout<<i<<" "; //2 1
    }
    cout<<endl;
    //To print any element of the index
    cout<<"Print first index element:-"<<d.at(1)<<endl;//1
    cout<<"Front"<<d.front()<<endl; //2
    cout<<"Back"<<d.back()<<endl; //1

    cout<<"The queue is empty?"<<d.empty()<<endl;//0
    cout<<"Before erase:"<<d.size()<<endl; //2
    /*d.pop_back();
    cout<<endl;
    for(int i:d)
    {
        cout<<i<<" "; //1
    }*/
    d.erase(d.begin(),d.begin()+1);
    cout<<"Before erase:"<<d.size()<<endl; //1

    for(int i:d)
    {
        cout<<i<<" "; //1
    }

}
