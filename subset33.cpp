#include <bits/stdc++.h>
using namespace std;

void Subset(int ind, vector<int>&arr, vector<vector<int>>&res, vector<int>&ds) {
  // 
  res.push_back(ds);

  for(int i = ind; i < arr.size(); i++) {
    ds.push_back(arr[i]);
    Subset(ind + 1, arr, res, ds);
    ds.pop_back();
  }
}
vector<vector<int>>Solve(vector<int>&arr) {
  vector<vector<int>>res;
  vector<int>ds;
  Subset(0, arr, res, ds);
  return res;
}
int main() {
  vector<int>arr = {1,2,3};
  vector<vector<int>>res = Solve(arr);
  for ( auto subset : res) {
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