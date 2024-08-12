#include <bits/stdc++.h>
using namespace std;

void CombinationSum(int ind, vector<int>&arr, int target, vector<vector<int>>&res, vector<int>&ds) {
  // base case

  if(ind == arr.size()) {
    if(target == 0) {
      res.push_back(ds);
    }
    return;
  }

  // checks the target

  if(arr[ind] <= target) {
    ds.push_back(arr[ind]);
    CombinationSum(ind, arr, target - arr[ind], res, ds);
    ds.pop_back();
  } 

  CombinationSum(ind + 1, arr, target, res, ds);

}


vector<vector<int>>Solve(vector<int>&arr, int target) {
 
  vector<vector<int>>result;
  vector<int>ds;
  CombinationSum(0, arr, target, result, ds);
  return result;

}
int main() {
  cout << "Combination sum" << endl;
  vector<int>arr = {2,3,4,5,6};
  int target = 5;
  vector<vector<int>>result =  Solve(arr, target);
  for (const auto& combination : result) {
        cout << "[ ";
        for (int num : combination) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }
  return 0;

}
