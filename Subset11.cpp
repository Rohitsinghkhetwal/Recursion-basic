#include<bits/stdc++.h>
using namespace std;

void Backtrack(vector<int>&nums, int i, vector<vector<int>>&res, vector<int>&subset) {
  //base case
  //   if(i == nums.size()) {
  //   res.push_back(subset);
  //   return;
  // }

  // subset.push_back(nums[i]);
  // Backtrack(nums, i + 1, res, subset);

  // subset.pop_back();
  // // if any duplicate
  // while(i + 1 < nums.size() && nums[i] == nums[i + 1])i++;//skippin the duplicate ones
  // Backtrack(nums, i + 1, res, subset);

  res.push_back(subset);
  // 1,2,2,3

  for(int ind = i; ind < nums.size(); ind++ ) {
    // if(ind != i && nums[ind] == nums[ind -1]) continue;
    
    subset.push_back(nums[ind]);
    Backtrack(nums, ind + 1, res, subset);
    subset.pop_back();
  }

}
vector<vector<int>>solve(vector<int>&arr) {
  vector<vector<int>>res;
  vector<int>subset;
  Backtrack(arr, 0, res,subset);
  return res;

}
int main() {
  cout << " Subset Problem" << endl;
  vector<int>nums = {1,2,2};
  vector<vector<int>>result = solve(nums);
  for ( auto subset : result) {
        cout << "[";
        for (int i = 0; i < subset.size(); ++i) {
            cout << subset[i];
            if (i < subset.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }
  return 0;
}