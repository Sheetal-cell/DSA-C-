//Map in Standard Template Library in C++

#include <iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string>m;

    m[1]="How";
    m[2]="are";
    m[13]="you?";
    for(auto i:m)
    {
        cout<<i.first<<endl;
    }
    m.insert({5,"Doraemon"});
    cout<<"Before erase:"<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding 11:"<<m.count(11)<<endl; //0

    m.erase(13);
    cout<<"After erase:"<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it=m.find(5);
    for(auto i=it;i!=m.end();i++)
    {
        cout<<(*i).first<<endl;//5
    }
}
