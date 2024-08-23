#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>res;

void Solve(vector<int>&arr, int target, int start, int end) {
  // we will be doing 2sum here 
  while(start < end) {
    if(arr[start] + arr[end] > target) {
      end--;
    }else if(arr[start] + arr[end] == target) {
      // we have to see if any duplicate are there or not
      while(arr[start] == arr[start + 1]) start++;
      while(arr[end] == arr[end - 1]) end--;
      res.push_back({-target, arr[start], arr[end]});
      start++;
      end--;
      
    }else {
      start++;
    }
  }
}

vector<vector<int>>threeSum(vector<int>&arr) {
  int n = arr.size();

  // we want triplet
  if(n < 3) {
    return {};
  }
  // sort an array of integer
  sort(begin(arr), end(arr));

  // fixing one element in array
  for(int i = 0; i < n; i++) {
    if(i > 0 && arr[i] == arr[i -1]) {
      continue;
    }

    int n1 = arr[i];
    int target = -n1;
    Solve(arr,target, i + 1, n -1);
  }

  return res;
}


int main() {
  vector<int>arr = {-1,0,1,2,-1,-4};
  vector<vector<int>>result = threeSum(arr);
  for (const auto& threeSum : result) {
        cout << "[ ";
        for (int num : threeSum) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }
  return 0;
}