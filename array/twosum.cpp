// This code is to return the index position of those elementswhich is equal to target after addition. 

#include<iostream>
#include<vector>
using namespace std;

vector<int> twosum(vector<int>nums,int target,int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(nums[i]+nums[j]==target){
                return {i,j};
            }
        }
    }
    return{};
}

int main(){
    vector<int>nums={37,94,6,46,86,62,49,56,23,15,47,50};
    int target=43;
    int size=nums.size();

    vector<int> ans = twosum(nums,target,size);
     for(int i:ans){                            
        cout<<i<<" ";
    }

    return 0;
}