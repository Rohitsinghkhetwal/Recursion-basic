#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

void Solve( vector<int> &arr, vector<int> &ds,int freq[])
{
  // base case
  if(ds.size() == arr.size()) {
    ans.push_back(ds);
    return;
  }

  for(int i = 0; i < arr.size(); i++) {
    if(!freq[i]) {
      ds.push_back(arr[i]);
      freq[i] = 1;
      Solve(arr, ds,freq);
      freq[i] = 0;
      ds.pop_back();
      
    }
  }
  
}

vector<vector<int>> Permute(vector<int> &arr)
{

  vector<int> ds;
  int freq[arr.size()] = {0};
  Solve( arr, ds,freq);
  return ans;
}

int main()
{
  cout << "Permutation of a number " << endl;
  vector<int>arr = {1, 2, 3};
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