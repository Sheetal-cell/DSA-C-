//Queue in Standard Template Library in C++

#include <iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string>q;

    q.push("How");
    q.push("are");
    q.push("you?");

    cout<<"Size of queue before pop:"<<q.size()<<endl;//3
    cout<<"Before pop:"<<endl;

    cout<<"Front element:-"<<q.front()<<endl; //How

    q.pop();
    cout<<"After pop:"<<endl;
    cout<<"Front element:-"<<q.front()<<endl; //are

    cout<<"Size of queue after pop:"<<q.size()<<endl;//2
}
