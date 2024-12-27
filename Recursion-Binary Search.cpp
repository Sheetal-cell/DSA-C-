//Binary Search using recursion
#include<iostream>
using namespace std;
bool search(int arr[],int s,int e,int k)
{
    //base case
    if(s>e)
    {
        return false;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==k)
        return true;
    if(arr[mid]>k)
    {
        return search(arr,s,mid-1,k);
    }
    else{
        return search(arr,mid+1,e,k);
    }
}
int main()
{
    int arr[5]={4,7,2,5,9};
    int size=5;
    int key=2;
    bool ans=search(arr,0,4,key);
    if(ans)
    {
        cout<<"Key is present in the array"<<endl;
    }
    else
    {
         cout<<"Key is not present in the array"<<endl;
    }
}
