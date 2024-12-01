


#include <iostream>
using namespace std;
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sortOne(int arr[],int n)
{
    int l=0;
    int r=n-1;
    int m=0;
    while(m<=r)
    {
        switch(arr[m])
        {
            case 0:swap(arr[l++],arr[m++]);
            break;
            case 1:m++;
            break;
            case 2:swap(arr[m],arr[r--]);
            break;

        }
    }
}
int main()
{
    int arr[8]={1,1,2,0,2,0,1,0};
    sortOne(arr,8);
    printArray(arr,8);
}
