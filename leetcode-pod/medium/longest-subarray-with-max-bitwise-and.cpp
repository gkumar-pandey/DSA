#include<bits/stdc++.h>

using namespace std;

 int longestSubarray(vector<int>& nums) {
        // Get Maximum Value from array
        int maxValue = nums[0];
        for(auto num:nums){
            if(maxValue<num){
                maxValue = num;
            }
        }

        int ans =0;
        int currLen = 0;
        for(auto num : nums){
            if(num == maxValue){
                currLen++;
                ans = max(ans,currLen);
            }else{
                currLen = 0;
            }
        }

        return ans;


    }


int main(){
    vector<int>nums = {1,2,3,3,2,2};
    int res = longestSubarray(nums);
    cout<<res<<endl;
    return 0;
}