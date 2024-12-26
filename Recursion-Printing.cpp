//Printing number using recursion
#include<iostream>
using namespace std;
void print(int n)
{
    //base case
    if(n==0)
    {
        return;
    }

   //recursive relation
    print(n-1);
    cout<<n<<endl;
}
int main()
{
    int n;
    cout<<"Enter the required number:"<<endl;
    cin>>n;
    cout<<endl;
    print(n);
}
