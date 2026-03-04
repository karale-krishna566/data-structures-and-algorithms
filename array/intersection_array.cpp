//To return the intersection of two array.

#include<iostream>
using namespace std;

void intersection(int arr1[],int arr2[], int size){
    for(int i=0;i<size;i++){
        int count=0;

        for(int j=0;j<size;j++){
            if(arr1[i]==arr2[j]){
                count++;
            }
        }

        if(count==1){
            cout<<arr1[i]<<" ";
        }
    }
}

int main(){
    int arr1[]={1,2,3,4,5,6,7};
    int arr2[]={5,6,7,8,9,10,11};
    int size=7;

    intersection(arr1,arr2,size);
    return 0;    
}