#include <iostream>

using namespace std;
int ArraySum(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
int main()
{
    int arr[100];int size;
    cout<<"Enter the size of elements"<<endl;
    cin>>size;
    cout<<"Enter array elements:-"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Sum of all array elements="<<ArraySum(arr,size);
}
