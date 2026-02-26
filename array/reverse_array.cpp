// This program is designed to print the array in reverse order.

#include<iostream>
using namespace std;

int PrintArrayReverse(){
    int arr[]={37,94,06,46,86,62,49,56,23,15,47,50};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"Actual array is :"<<endl;

    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }

    cout<<"Reversed Array is :"<<endl;

    for(int i=size-1;i>=0;i--){
        cout<<arr[i]<<endl;
    }

    return 0;

}

int main(){
    PrintArrayReverse();
    return 0;
}