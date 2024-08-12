#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>result;

void Combination(vector<int>&arr, vector<int>&ds, int ind, int target) {
  // base case
  if(target < 0) {
    return;
  }
  if(target == 0) {
    result.push_back(ds);
    return;
  }

  for(int i = ind; i < arr.size(); i++) {
    // condition
      ds.push_back(arr[i]);
      Combination(arr, ds, ind, target - arr[i]);
      ds.pop_back();
    
  }
  
 
}


vector<vector<int>>Solve(vector<int>&arr, int target) {
  vector<int>ds;
  Combination(arr, ds, 0, target);
  return result;
}


int main() {
  cout << "Combination sum using loop" << endl;
  vector<int>arr = {2,3,6,7};
  int target = 6;
  vector<vector<int>>result = Solve(arr, target);
  
  for (const auto& combination : result) {
        cout << "[ ";
        for (int num : combination) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }
  return 0;
}