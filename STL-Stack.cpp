//Stack in Standard Template Library in C++

#include <iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string>s;

    s.push("How");
    s.push("are");
    s.push("you?");

    cout<<"Top element:-"<<s.top()<<endl; //you?

    s.pop();
    cout<<"Top element:-"<<s.top()<<endl; //are

    cout<<"Size of stack:-"<<s.size()<<endl; //2
    cout<<"Is the stack empty?"<<s.empty()<<endl;//0
}
