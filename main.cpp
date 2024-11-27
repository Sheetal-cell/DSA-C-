#include <iostream>

using namespace std;
int bit(int num)
{
    int count=0;
    while(num)
    {
        if(num&1==1)
        {
            count+=1;
        }
        num=num>>1;
    }
    return count;
}

int main()
{
   int a,b;
   cin>>a>>b;
   int bit_a=bit(a);
   int bit_b=bit(b);
   cout<<"sum of set bits in" <<a <<"&"<<b <<"is:-"<<(bit_a+bit_b);
}
