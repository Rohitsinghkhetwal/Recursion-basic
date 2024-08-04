#include <bits/stdc++.h>
using namespace std;
void Solution(int ind, vector<int>&arr, vector<vector<int>>&ans, vector<int>&ds ) {

  ans.push_back(ds);
  for(int i = ind; i < arr.size(); i++) {
    // skip the duplicate here 
    if(i > ind && arr[i] == arr[i - 1]) continue;
    ds.push_back(arr[i]);
    Solution(ind + 1, arr, ans, ds);
    ds.pop_back();
  }
}
vector<vector<int>>SolveSub(vector<int>&arr) {
  vector<vector<int>>ans;
  vector<int>ds;
  sort(arr.begin(), arr.end());
  Solution(0, arr, ans, ds);
  return ans;

}
int main() {
  vector<int>arr = {1,2,2};
  vector<vector<int>>result = SolveSub(arr);
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