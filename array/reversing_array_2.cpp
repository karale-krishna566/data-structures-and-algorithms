//this program is to swapping elementrs of array with help of two pointer method

#include<iostream>
#include<utility>
using namespace std;

void swaping(int arr[],int size){
    int start=0;
    int end=size-1;
    
    while(end>start){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

 }

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    swaping(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}