#include <bits/stdc++.h>
using namespace std;
void Permute( vector<int>&arr, vector<vector<int>>&res, vector<int>&ds,vector<bool>&visited) {
  // base case
  if(arr.size() == ds.size()) {
    res.push_back(ds);
  }

  for(int i = 0; i < arr.size(); i++) {
    if(visited[i] == true) continue;

    visited[i] = true;
    ds.push_back(arr[i]);
    Permute(arr, res, ds, visited);
    ds.pop_back();
    visited[i] = false;
  }


  
}
vector<vector<int>>Solve(vector<int>&arr) {
  vector<vector<int>>res;
  vector<int>ds;
  vector<bool>visited(arr.size(), false);
  Permute( arr, res, ds, visited);
  return res;
}
int main() {
  cout << "Permutation of a number " << endl;
  vector<int>arr = {1,2,3};

  vector<vector<int>>result =   Solve(arr);
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