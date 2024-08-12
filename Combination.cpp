#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>result;
void Combination(int start, int &n, int k, vector<int>&temp) {
  //base case
  if(k == 0) {
    result.push_back(temp);
    return;
  }

  if(start >= n) {
    return;
  }

  temp.push_back(start);
  Combination(start + 1, n, k - 1, temp);
  temp.pop_back();
  Combination(start + 1,n , k, temp );

}
vector<vector<int>>solve(int n, int k) {
  vector<int>temp;
  Combination(1, n, k, temp);
  return result;

}
int main() {
  cout << "combination" << endl;
  int n = 4;
  int k = 2;
  vector<vector<int>>result = solve(n, k);
  for (const auto& combination : result) {
        cout << "[ ";
        for (int num : combination) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }
  return 0;
  
}