


#include <iostream>
using namespace std;


bool look(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[10]={2,3,5,1,0,-3,-7,66,43,11};
    cout<<"Enter the element you want to search for:"<<endl;
    int key;
    cin>>key;
    bool found=look(arr,10,key);
    if (found)
    {
        cout<<"Key is present"<<endl;
    }
    else
    {
        cout<<"Key is absent"<<endl;
    }
}
