#include<iostream>
using namespace std;

void reverseArray(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;

    }
}

void printArray(int arr[],int n)
{
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={2,1,4,8,7};
    int size=sizeof(arr)/sizeof(int);

    reverseArray(arr,size);
    printArray(arr,size);

     return 0;
}