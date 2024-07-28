#include <bits/stdc++.h>
using namespace std;
void Solve(int ind, vector<int>&arr, vector<vector<int>>res) {
    //base case 
    if(ind == arr.size()) {
        res.push_back(arr);
        return;
    }

    // choices
    for(int i = ind; i < arr.size(); i++) {
        cout << "Value of index is " << ind << endl;
        cout << "The value of i is " << i << endl;
        swap(arr[ind], arr[i]);
        Solve(ind + 1, arr, res);
        swap(arr[ind], arr[i]);
    }
}

vector<vector<int>>findPermutation(vector<int>&arr) {
    vector<vector<int>>result;
    Solve(0, arr, result);
    return result;
}



int main() {
    cout << "Permutation and combination" << endl;
    vector<int>arr = {1,2,3};
    findPermutation(arr);
    return 0;
}