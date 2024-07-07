#include <bits/stdc++.h>
using namespace std;
void findCombination(int index, int target, vector<int>&arr, vector<int>&ds, vector<vector<int>>&ans) {
    // base case 
    if(index == arr.size()) {
        if(target == 0) {
            ans.push_back(ds);
        }
        return;
    }
    // now we will take and don't take a item 
    if(arr[index] <= target) {
        ds.push_back(arr[index]);
        findCombination(index, target - arr[index], arr, ds, ans);
        ds.pop_back();
    }
    findCombination(index + 1 , target, arr, ds, ans);
}

vector<vector<int>> CombinationSum(vector<int>&arr, int target) {
    vector<int>ds;
    vector<vector<int>>ans;
    findCombination(0, target, arr, ds, ans);
    return ans;

}
int main() {
    cout << "Combination sum using recursion " << endl;
    vector<int>arr = {2,3,6,7};
    int target = 7;
    vector<vector<int>> result = CombinationSum(arr, target);
    cout << "Combinations that sum to " << target << " are:" << endl;
    for (const auto& combination : result) {
        cout << "[ ";
        for (int num : combination) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }
    return 0;
}