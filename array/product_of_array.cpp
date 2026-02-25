#include<iostream>
using namespace std;

int productofarr(){
    int product=1;
    int nums[]={1,-67,45,37,-3,1,87};
    int size=sizeof(nums)/sizeof(nums[0]);

    for(int i=0;i<size;i++){   
        product*=nums[i];
    }
    return product;
}

int main(){
    cout<<productofarr();
    return 0;
}