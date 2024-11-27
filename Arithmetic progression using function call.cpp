#include <iostream>

using namespace std;
int ap(int n)
{
   int out=((3*n)+7);
   return out;
}

int main()
{
    int n;
    cout<<"Enter the term you want to find:"<<endl;
    cin>>n;
    int ans=ap(n);
    cout<<"nth term= "<<ans<<endl;
}
