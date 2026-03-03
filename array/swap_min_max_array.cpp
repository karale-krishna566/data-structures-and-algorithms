//this program is to swap min and max vale of array

#include<iostream>
#include<climits>
#include<utility>
using namespace std;

void swapping(int arr[],int size){
    int max=INT_MIN;
    int min=INT_MAX;

    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }

        if(arr[i]>max){
            max=arr[i];
        }
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" , ";
    }
    cout<<"\n        MIN : "<<min<<"        "<<"MAX : "<<max<<endl;

    swap(min,max);
    cout<<"        MIN : "<<min<<"        "<<"MAX : "<<max<<endl;
}

int main(){
    int arr[]={54,83,65,39,39,65,84,24,86,94,612,34,86};
    int size=sizeof(arr)/sizeof(arr[0]);

    swapping(arr,size);
    return 0;
}