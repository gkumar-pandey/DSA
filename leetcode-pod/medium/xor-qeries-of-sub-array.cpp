#include<iostream>
#include<vector>

using namespace std;



// Brute Force => O(n^2)
vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
    
    // vector<int> ans;
    // for(int i=0; i<queries.size(); i++){
    //     int xorValue = 0;
    //     int left = queries[i][0];
    //     int right = queries[i][1];
    //     for(int j=left; j<=right; j++){
    //         xorValue = xorValue ^ arr[j];
    //     }

    //     ans.push_back(xorValue);
    // }

    //! Optimized Solution
    vector<int> ans;
    vector<int> xorPreffixArr;

    xorPreffixArr.push_back(arr[0]);


    for(int i=1; i<arr.size(); i++){
        xorPreffixArr.push_back(arr[i]^xorPreffixArr[i-1]);
    }

    for(int i=0; i<queries.size(); i++){
        int left = queries[i][0];
        int right = queries[i][1];
        if(left ==0){
            ans.push_back(xorPreffixArr[right]);
        }else{
            ans.push_back(xorPreffixArr[right]^ xorPreffixArr[left-1]);
        }
    }

    return ans;
        
}

int main(){

    vector<int> arr = {1,3,4,8};
    vector<vector<int>> queries = {{0,1},{1,2},{0,3},{3,3}};

    vector<int> ans = xorQueries(arr, queries);
    for(auto a:ans){
        cout<<a<<" ";
    }

    return 0;   
}