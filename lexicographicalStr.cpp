#include <bits/stdc++.h>
using namespace std;


void solve(vector<char>&arr, string &temp, int n, int k, vector<string>&ans ) {
  // base case for this
  if(ans.size() == k) {
    return;
  }
  if(temp.size() == n) {
    ans.push_back(temp);
    return;
  }
  for(int i = 0; i < 3; i++) {
    // condition 
    if(temp.size() == 0 || temp.back() != arr[i]) {
      temp.push_back(arr[i]);
      solve(arr, temp, n, k, ans);
      temp.pop_back();
    }
  
  }
}





int main() {
  cout << "Lexicographical string" << endl;
  int n = 3, k = 9;
  vector<char>arr = {'a', 'b', 'c'};
  string temp = "";
  vector<string>ans;
  solve(arr, temp, n, k, ans);
  for(auto i : ans) {
    cout << i << endl;
  }
  
  return 0;
}