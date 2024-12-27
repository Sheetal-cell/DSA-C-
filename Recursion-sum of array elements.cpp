//Sum of array elements using recursion
#include<iostream>
using namespace std;
int get_sum(int*arr,int size)
{
    //base case
    if(size==0)
    {
        return 0;
    }
    if(size==1)
        return arr[0];
    else{
        int ans=arr[0]+get_sum(arr+1,size-1);
        return ans;
    }
}
int main()
{
    int arr[5]={4,7,2,5,9};
    cout<<"Sum of all array elements = "<<get_sum(arr,5);
}
