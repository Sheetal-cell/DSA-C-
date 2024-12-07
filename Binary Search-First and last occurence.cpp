//Find first and last occurence of any element in an array
#include <iostream>
using namespace std;
int firstOcc(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int ans=-1;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        if(key>arr[mid])
        {
            start=mid+1;
        }
       else if
            (key<arr[mid]){
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return ans;
}
int lastOcc(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int ans=-1;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }
        else if(key>arr[mid])
        {
            start=mid+1;
        }
        else if
            (key<arr[mid])
            {
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return ans;
}
int main()
{
    //don't forget to give input in monotonous function.
    int arr[11]={1,2,3,3,3,3,3,3,3,3,5};
    int first=firstOcc(arr,11,3);

    cout<<"first index = "<<first<<endl;
    int last=lastOcc(arr,11,3);
    cout<<"last index = "<<last<<endl;

}
