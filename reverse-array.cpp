#include<iostream>
using namespace std;
#include<climits>

int smallestarr(){
    int size=7;
    int num[size]={1,-67,45,37,-3,1,87};
    int smallest = INT_MAX;

    for(int i=0;i<=size;i++){
        if(num[i]<smallest){
            smallest=num[i];
        }
    }
    return smallest;
}

int main(){
    cout<<smallestarr();
    return 0;
}