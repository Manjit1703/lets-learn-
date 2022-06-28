#include<iostream>
using namespace std;
 
int findUnique(int array[],int size){
    int ans=0;
    for(int i=0; i<size; i++){
        ans=ans^array[i];
    }

    return ans;
}

 int main(){

      int size;
    cout<<"Enter the size of the array "<<endl;
    cin>>size;
    
    int arr[size];
    cout<<"Enter the element of the array "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    //calling findUnique function 
    cout<<"The unique element of the array is -"<<findUnique(arr,size)<<endl;

     
     return 0;
 }