#include <bits/stdc++.h>
using namespace std;

void Solve(int ind, vector<int>&arr, vector<vector<int>>&result, vector<int>&ds) {
    // base case 
    if(ind == arr.size()) {
        result.push_back(ds);
        return;
    }

    ds.push_back(arr[ind]);
    Solve(ind + 1, arr, result, ds);
    ds.pop_back();

    //skipping the part 
    while(arr[ind] < arr.size() && arr[ind] == arr[ind + 1]) ind++;
    Solve(ind + 1, arr, result, ds);
}

vector<vector<int>>findSubsetDup(vector<int>&arr) {
    vector<vector<int>>result;
    vector<int>ds;
    sort(arr.begin(), arr.end());
    Solve(0, arr, result, ds);
    return result;
}

int main() {
    cout << "Subset Dup with backtracking" << endl;
    vector<int>arr = {1,2,2};
    vector<vector<int>>result = findSubsetDup(arr);
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