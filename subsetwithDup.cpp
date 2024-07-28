#include <bits/stdc++.h>
using namespace std;

void Solve(int index, vector<int>&arr, vector<vector<int>>&result, vector<int>&ds) {
    // an array that contains the elements can have duplicates 
    // base case
    result.push_back(ds);
    for(int i = index; i< arr.size(); i++) {
        cout << "The value of the  i is" << i << endl;
        cout << "The value of the  index is" << index << endl;

        if(i != index && arr[i] == arr[i -1]) continue;
        ds.push_back(arr[i]);
        Solve(index + 1, arr, result, ds);
        ds.pop_back();   

    }
}

vector<vector<int>>subsetWithDup(vector<int>&arr) {
    vector<vector<int>>result;
    vector<int>ds;
    sort(arr.begin(), arr.end());
    Solve(0, arr, result, ds);
    return result;

}
int  main() {
    cout << "Subset with duplicate" << endl;
    vector<int>arr = {1,2,2};
    vector<vector<int>>result = subsetWithDup(arr);
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