//Linear Search using recursion
#include<iostream>
using namespace std;
bool search(int arr[],int size,int k)
{
    //base case
    if(size==0)
    {
        return false;
    }
    if(arr[0]==k)
        return true;
    else{
        bool remaining_part=search(arr+1,size-1,k);
        return remaining_part;
    }
}
int main()
{
    int arr[5]={4,7,2,5,9};
    int size=5;
    int key=4;
    bool ans=search(arr,size,key);
    if(ans)
    {
        cout<<"Key is present in the array"<<endl;
    }
    else
    {
         cout<<"Key is not present in the array"<<endl;
    }
}
