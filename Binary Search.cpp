


#include <iostream>
using namespace std;
int binarysearch(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(key>arr[mid])
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
int main()
{
    //don't forget to give input in monotonous function.
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};
    int index=binarysearch(even,6,12);

    cout<<"req index for even array= "<<index<<endl;
    int index2=binarysearch(odd,5,8);
    cout<<"req index for odd array= "<<index2<<endl;

}
