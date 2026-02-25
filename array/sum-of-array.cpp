#include<iostream>
using namespace std;

int sumofarr(){
    int sum=0;
    int size=7;
    int arr[size]={1,-67,45,37,-3,1,87};

    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    cout<<sumofarr();
    return 0;
}