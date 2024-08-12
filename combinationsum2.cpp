#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>ans;

void CombinationSum(int ind, vector<int>&arr, vector<int>&ds, int target) {
  // base case
  if(ind == arr.size()) {
    return;
  }

  if(target == 0) {
    ans.push_back(ds);
    return;
  }

  for(int i = ind; i < arr.size(); i++) {
    // skip the duplicate ones
    if(i != ind  && arr[i] == arr[i - 1]) continue;

    ds.push_back(arr[i]);
    CombinationSum(ind + 1, arr, ds, target - arr[i]);
    ds.pop_back();
  }
}

vector<vector<int>>Solve(vector<int>&arr, int target) {
  vector<int>ds;
  CombinationSum(0, arr, ds, target);
  return ans;
}
int main()  {
  cout << "Combination sum 2 problem" << endl;
  vector<int>arr = {9,3,2,2,3};
  int target = 5;
  sort(arr.begin(), arr.end());
  vector<vector<int>> result = Solve(arr, target);
  for (const auto& combination : result) {
        cout << "[ ";
        for (int num : combination) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }
  
  return 0;
}