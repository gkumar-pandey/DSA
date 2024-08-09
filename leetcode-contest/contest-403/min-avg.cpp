#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

 

double minimumAverage(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(),nums.end());

    int i = 0; 
    int j = n -1;

    double ans = 1000;

    while(i<j){
        double avg = (nums[i]+nums[j])/2.0;
        if(avg<ans){
            ans = avg;
        }
        i++;
        j--;
    }
    return ans;
        
}

int main(){
    vector<int> nums = {7,8,3,4,15,13,4,1};
    cout << minimumAverage(nums);
    return 0;
}
