//Selection sort into ascending order
#include<iostream>
using namespace std;

void arrInput(int arr[], int n)
{
    cout<<"Enter Array Input - ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void PrintArray( int arr[], int n)
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void SelectionSort(int arr[], int n ){


    for(int i=0;i<n-1;i++){
        int minIndex=i;

        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex])
                minIndex=j;
        }

        swap(arr[minIndex], arr[i]);
    }

    PrintArray(arr , n);

}
int main(){
    int n;// SIZE OF ARRAY
    cout<<"Enter the Size of Array- ";
    cin>>n;
    int arr[n];

    arrInput(arr, n);
    cout<<"ARRAY TAKEN AS INPUT - ";
    PrintArray(arr,n);
    cout<<endl;
    cout<<"SORTED ARRAY IS - ";
    SelectionSort(arr,n);
    cout<<endl;

}
