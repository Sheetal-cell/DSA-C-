//Printing number in reverse order using recursion
#include<iostream>
using namespace std;
void print(int n)
{
    //base case
    if(n==0)
    {
        return;
    }
    cout<<n<<endl;
   //recursive relation
    print(n-1);
}
int main()
{
    int n;
    cout<<"Enter the required number:"<<endl;
    cin>>n;
    cout<<endl;
    print(n);
}
