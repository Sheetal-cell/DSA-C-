//Algorithm in C++
//Binary Search using algorithm

#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<binary_search(v.begin(),v.end(),5)<<endl; //0-false
    cout<<binary_search(v.begin(),v.end(),6)<<endl; //1-true

    cout<<"Lower Bound:"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl; //2
    cout<<"Upper Bound:"<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl; //2

    int a=3;
    int b=5;
    cout<<"Max:"<<max(a,b)<<endl; //5
    cout<<"Min:"<<min(a,b)<<endl; //3
    swap(a,b);
    cout<<"a:-"<<a<<endl; //a:-5

    string s="abcd";
    cout<<"String:"<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<"Reverse string:"<<s<<endl; //dcba
     //rotate vector
     rotate(v.begin(),v.begin()+2,v.end());
     cout<<"After rotate:"<<endl;
     for(int i:v)
     {
         cout<<i<<" "; //6 7 1 3
     }
     cout<<endl;
     //Sort function
     sort(v.begin(),v.end());
     cout<<"Sorted vector:"<<endl;
     for(int i:v)
     {
         cout<<i<<" "; //1 3 6 7
     }
}
