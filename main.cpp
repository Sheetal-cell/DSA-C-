#include <iostream>

using namespace std;
int get_Max(int num[],int n)
{
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,num[i]);
    }
    //returning maximum value
    return maxi;
}
int get_Min(int num[],int n)
{
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        mini=min(mini,num[i]);
    }
    //returning minimum value
    return mini;
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
