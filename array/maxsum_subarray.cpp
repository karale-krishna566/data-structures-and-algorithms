//In this program we have found the sum of maximum sub array with the help of kadan's algorithm

#include<iostream>
#include<climits>
#include<vector>
using namespace std;

 int maxSubArray(vector<int>& nums) {
        int currsum=0,maxSum=INT_MIN;
        int n=nums.size();
       for(int val:nums){
        currsum=currsum+val;
        maxSum=max(currsum,maxSum);
        if(currsum<0){
            currsum=0;
        }
       } 
       return maxSum;
    }

    int main(){
        vector<int>nums={-2,1,-3,4,-1,2,1,-5,4};
        cout<<maxSubArray(nums);
        return 0;
    }
