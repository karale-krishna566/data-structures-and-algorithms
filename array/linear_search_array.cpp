//This program is executed to return the index position of specified element in array.

#include<iostream>
using namespace std;

int linearsearch(int arr[],int target,int size){

    int target_index=-1;
   
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            target_index=i;
            return target_index;
        }
    }
    return -1;
}

int main(){
     int arr[]={24,45,65,75,85,95,15,35,25,86};
     int size=sizeof(arr)/sizeof(arr[0]);

     int index=linearsearch(arr,15,size);
     cout<<"the index position of target is : "<<index<<endl;
    return 0;
}