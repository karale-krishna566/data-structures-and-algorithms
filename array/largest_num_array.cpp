#include<iostream>
using namespace std;
#include<climits>

int largestarr(){
    int largest_num=INT_MIN;
    int nums[]={1,-67,45,37,-3,1,87};
    int size=sizeof(nums)/sizeof(nums[0]);

    for(int i=0;i<size;i++){
        if(largest_num<nums[i]){
            largest_num=nums[i];
        }
    }
    return largest_num;
}

int main(){
    cout<<largestarr();
    return 0;
}