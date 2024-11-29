


#include <iostream>
using namespace std;
int unique(int arr[],int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}
int main()
{
    int arr[20];
    int size;
    cout<<"Enter size of the array:"<<endl;
    cin>>size;
    cout<<"Enter the array elements:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int finalans=unique(arr,size);
    cout<<"Unique number= "<<finalans;
}
