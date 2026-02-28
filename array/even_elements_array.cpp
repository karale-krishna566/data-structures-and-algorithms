//This program is to return all even values and their index from array.

#include<iostream>
using namespace std;

void even_array_elements(int arr[],int size){
    int index_position=-1,even=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            index_position=i;
            even=arr[i];
            cout<<"Even element : "<<even<<" "<<" index : "<<index_position<<endl;
        }
    }
}

int main(){
    int arr[]={24,45,65,75,85,95,15,35,25,86};
    int size=sizeof(arr)/sizeof(arr[0]);

    even_array_elements(arr,size);
    return 0;
}