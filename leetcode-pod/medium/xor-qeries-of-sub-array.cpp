#include<iostream>
#include<vector>

using namespace std;



// Brute Force => O(n^2)
vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
    
    vector<int> ans;

    for(int i=0; i<queries.size(); i++){
        int xorValue = 0;
        int left = queries[i][0];
        int right = queries[i][1];
        for(int j=left; j<=right; j++){
            xorValue = xorValue ^ arr[j];
        }

        ans.push_back(xorValue);
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