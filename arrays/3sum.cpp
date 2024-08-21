#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>res;

void Solve(vector<int>&arr, int target, int start, int end) {

  // two sum logic will be applied here !

  while(start < end) {
    if(arr[start] + arr[end] > target) {
      end--;
    }else if(arr[start] + arr[end] == target) {
      // avoid duplicates
      while(start < end && arr[start] == arr[start + 1]) start++;
      while(start < end && arr[end] == arr[end - 1]) end--;
      res.push_back({-target, arr[start], arr[end]});
      start++;
      end--; 

    }else {
      start++;
    }
  }
}


vector<vector<int>>threeSum(vector<int>&arr){

  int n = arr.size();
  if(n < 3) {
    return {};
  }

  // sort it 
  sort(begin(arr), end(arr));

  // fixing elem
  for(int i = 0; i < n -1; i++) {
    if(i > 0 && arr[i] == arr[i -1]) {
      continue;
    }

    int n1 = arr[i];
    int target = -n1;

    Solve(arr, target, i + 1, n -1);

  }

  return res;




}


int main() {
  cout << "3 sum problem " << endl;
  vector<int>arr = {-1,0,1,2,-1,-4};
  
  vector<vector<int>>result = threeSum( arr);
  for (const auto& threeSum : result) {
        cout << "[ ";
        for (int num : threeSum) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }
  
  return 0;
}