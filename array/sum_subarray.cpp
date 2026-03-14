//This code is to return max sum of sub array.

#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int main(){
    int max_sum=INT_MIN;
    int arr[]={1,2,3,4,5,-3,-2,4,6,-7,9};
    int size=sizeof(arr)/sizeof(arr[0]);

    for(int st=0;st<size;st++){
        int cur_sum=0;
        for(int end=st;end<size;end++){
            cur_sum+=arr[end];
            max_sum=max(cur_sum,max_sum);
        }
    }
    cout<<"max sum of sub array is : "<<max_sum<<endl;
    return 0;
}