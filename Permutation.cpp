#include <bits/stdc++.h>
using namespace std;
void Solve(int index, vector<int>&arr, vector<vector<int>>&res) {
    // base case 
    if(index == arr.size()) {
        res.push_back(arr);
        return;
    }   

    for(int i = index; i < arr.size(); i++) {
        swap(arr[index], arr[i]);
        Solve(index + 1, arr, res);
        swap(arr[index] , arr[i]);
    }
}
vector<vector<int>> permute(vector<int> &arr)
{
    vector<vector<int>> ans;
    Solve(0, arr, ans);
    return ans;
}
int main()
{
    cout << " Permutation of a Number and string " << endl;
    vector<int> arr = {1, 2, 3};
   
    vector<vector<int>>result =  permute(arr);
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
}