//Find a linear unique(non repeated) number from array but with linear time complexity

#include<iostream>
#include<vector>
using namespace std;

int singlenumber(vector<int>& nums){
    int ans=0;
    for(int val:nums){
        ans ^= val;
    }
    return ans;
}

int main(){
    vector<int>nums={1,2,3,4,3,2,4,5,5,7,1};
    cout<<singlenumber(nums);
    return 0;
}