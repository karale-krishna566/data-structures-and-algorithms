//This program is to count odd values in the array.

#include<iostream>
using namespace std;

int countOdd(int arr[],int size){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2!=0){
            count++;
        }
    }
    return count;
}

int main(){
    int arr[]={24,45,65,75,85,95,15,35,25,86};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<countOdd(arr,size);
    return 0;
}