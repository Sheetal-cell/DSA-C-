#include <iostream>

using namespace std;
int fibo(int n)
{
   int a=0,b=1,c;
   for(int i=1;i<=n;i++)
   {
       c=a+b;
       a=b;
       b=c;
   }
   return c;
}

int main()
{
    int n;
    cout<<"Enter the required term you want to find:"<<endl;
    cin>>n;
    int ans=fibo(n);
    cout<<"Fibonacci term= "<<ans<<endl;
}
