#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>solve(vector<int>&nums, int target) {
  
  int n = nums.size();
  set<vector<int>>ans;
  sort(nums.begin(), nums.end());
  int sum = 0;


  for(int i = 0; i < n -3; i++) {
    // to avoid duplicates
    if(i > 0 && nums[i] == nums[i - 1]) continue;
    // for j
    for(int j = i+ 1; j < n -2; j++) {
      // to avoid duplicates on jth iteration
      if( j > i + 1 && nums[j] == nums[ j -1]) continue;
      int left = j+ 1 , right = n - 1;

      while( left < right) {
        sum = nums[i] + nums[j] + nums[left] + nums[right];
        if(sum > target) {
          right--;
        }else if(sum == target) {
          vector<int> t;
          t.push_back(nums[i]);
          t.push_back(nums[j]);
          t.push_back(nums[left]);
          t.push_back(nums[right]);
          ans.insert(t);
          left++;
        }else {
          left++;
        }
      }
    }
  }

  vector<vector<int>>res;
  for(auto i : ans) {
    res.push_back(i);
  }
  return res;



}
int main() {
  cout << "4 sum problem" << endl;
  vector<int>arr = {1,0,-1,0,-2,2};
  int target = 0;
  vector<vector<int>>result = solve(arr, target);
  for (const auto& threeSum : result) {
        cout << "[ ";
        for (int num : threeSum) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

  
  return 0;
}