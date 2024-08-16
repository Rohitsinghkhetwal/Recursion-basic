#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>&arr, int ind) {
  // base case
  if(ind == 1) {
    return ;
  }

  for(int i = 0; i < ind - 1; i++) {

    if(arr[i] > arr[i + 1]) {
    swap(arr[i] , arr[i + 1]);
  }

  }

  solve(arr, ind - 1);

  
}
int main() {
  cout << "sort an array" << endl;
  vector<int>arr = {9,8,7,6,5};
  int l = arr.size();
   solve(arr, l);
  for(auto i : arr) {
    cout << i << endl;
  }
  return 0;
}