//Return index using recursion
#include<iostream>
using namespace std;
int search(int arr[],int s,int e,int k)
{
    //base case
    //element not found
    if(s>e)
    {
        return -1;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==k)
        return mid;
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
    int key=5;
    int index=search(arr,0,4,key);
    cout<<"Index of the mentioned key:-"<<index;
}
