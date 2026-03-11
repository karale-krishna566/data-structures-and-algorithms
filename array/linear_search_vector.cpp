// This program is to implement linear search using vector

#include<iostream>
#include<vector>
using namespace std;

int linearsearch(vector<int>nums,int target){
    int index=0;
    for(int val:nums){
       if(val==target){
        return index;
       }
       index++;
    }
    return -1;
}

int main(){
vector<int>nums={1,2,3,4,5,6,7,8,9,10};
int target=4;
cout<<linearsearch(nums,target);
return 0;
}