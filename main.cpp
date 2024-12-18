//Array function in Standard Template Library in C++

#include <iostream>
#include<array>
using namespace std;

int main()
{
    array<int,4>arr={1,2,3,4};
    int size=arr.size();
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl; //prints the elements at respective index of the array
    }
    cout<<"Element at second index:- "<<arr.at(2)<<endl; //gives the element present in the second index i.e., 3
    cout<<"Is the array empty? "<<arr.empty()<<endl; //gives the answer of the given question in T/F format
    cout<<"First element:- "<<arr.front()<<endl; //front keyword gives the first element of the array
    cout<<"Last element:- "<<arr.back()<<endl; //back keyword gives the last element of the array
}
