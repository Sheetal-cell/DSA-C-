//Bubble sort using recursion-in increasing order
#include<iostream>
using namespace std;

void sort_Array(int arr[],int size)
{
    //base case
    if(size==0||size==1)
        return;
    for(int i=0;i<size-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
    sort_Array(arr,size-1);
}
int main()
{
    int arr[5]={3,1,7,4,2};
    sort_Array(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}
