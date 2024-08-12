#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>ans;

void Helper(int ind,vector<int>arr) {
  // base case
  if(ind == arr.size()) {
    ans.push_back(arr);
    return;
  }

  for(int i = ind; i < arr.size(); i++) {
    if(i == ind || arr[i] != arr[ind]) {
    swap(arr[ind] , arr[i]);
    Helper(ind + 1, arr);
    }
  }
}
vector<vector<int>>Permute(vector<int>&arr) {
 
  Helper(0,arr);
  return ans;
}

int main(){
  cout << "permutation of an array " << endl;
  vector<int>arr = {1,2,2};
  
  vector<vector<int>>result = Permute(arr);
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