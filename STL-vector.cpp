//Vector in Standard Template Library in C++

#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;

    //Capacity of vector v at each step
    cout<<"Capacity="<<v.capacity()<<endl;//0
    v.push_back(1);
    cout<<"capacity="<<v.capacity()<<endl;//1
    v.push_back(2);
    cout<<"capacity="<<v.capacity()<<endl;//2
    v.push_back(3);
    cout<<"capacity="<<v.capacity()<<endl;//4 (since,it doubles its capacity when it fills)

    //Size of vector
    cout<<"Size="<<v.size()<<endl;//3

    //To get the element at the respective index
    cout<<"Element at second index="<<v.at(2)<<endl;//3

    //To get the first and last elements of the elements of the vector
    cout<<"Front element="<<v.front()<<endl;//1
    cout<<"Back element="<<v.back()<<endl;//3

    //pop-back: removes the last pushed element
    cout<<"Before pop"<<endl;
    for(int i:v)
    {
        cout<<i<<" "; //1 2 3
    }
    cout<<endl;

    v.pop_back();
    for(int i:v)
    {
        cout<<i<<" "; //1 2
    }

    //Clearing the vector(emptying the vector totally)
    cout<<"Before clearing size:"<<v.size()<<endl;//3
    v.clear();
    cout<<"after clearing size:"<<v.size()<<endl;//0

    //To create a vector of specified size
    vector<int>a(5,1); //5-size  1-initializes all elements defaultly
    cout<<"Printing vector a"<<endl;
    for(int i:a)
    {
        cout<<i<<" "; //1 1 1 1 1
    }
    cout<<endl;

    //Copy vector a inside any other vectot e.g., vector-last
    vector<int>last(a);
    cout<<"Printing vector-last"<<endl;
    for(int i:last)
    {
        cout<<i<<" "; //1 1 1 1 1
    }
    cout<<endl;

}
