#include <iostream>

using namespace std;
int get_Max(int num[],int n)
{
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(num[i]>max)
        {
            max=num[i];
        }
    }
    //returning maximum value
    return max;
}
int get_Min(int num[],int n)
{
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(num[i]<min)
        {
            min=num[i];
        }
    }
    //returning minimum value
    return min;
}
int main()
{

    int size;
    cin>>size;
    int num[100];
    //taking input in array
    for(int i=0;i<size;i++)
    {
        cin>>num[i];
    }
    cout<<"maximum value is"<<get_Max(num,size)<<endl;
     cout<<"minimum value is"<<get_Min(num,size)<<endl;
return 0;
}
