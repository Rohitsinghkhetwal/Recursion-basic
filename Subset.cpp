#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&nums, vector<vector<int>>&ans, vector<int>&output, int index) {
    // base case
    if(index == nums.size()){
        ans.push_back(output);
        return;
    }

    //exclude
    solve(nums, ans, output, index + 1);

    //include 
    int elem = nums[index];
    output.push_back(elem);
    solve(nums, ans, output, index + 1);   
}

vector<vector<int>>subsets(vector<int>&nums) {
    vector<vector<int>> ans;
    vector<int>output;
    int index = 0;
    solve(nums, ans, output, index);
    return ans;
}



int main() {
    vector<int>nums = {1,2,3};
    subsets(nums);

    
    return 0;
}