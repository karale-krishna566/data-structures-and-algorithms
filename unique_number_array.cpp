// The purpose of this program is to return unique values in array

#include<iostream>
using namespace std;

void unique_no(int arr[],int size){
     
    for(int i=0;i<size;i++){
         int count = 0;

        for(int j=0; j<size; j++){
            if(arr[i] == arr[j]){                    //also compares with itself then count == 1 , and if duplicate count == 2;
                count++;
            }
        }

        if(count == 1){
            cout << arr[i] << " ";
        }
    }
}

int main(){
    int arr[]={23,24,25,26,27,32,34,35,36,37,23,24,35,36};
    int size=sizeof(arr)/sizeof(arr[0]);

    unique_no(arr,size);
    return 0;
}