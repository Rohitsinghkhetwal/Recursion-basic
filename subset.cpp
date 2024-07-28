#include<bits/stdc++.h>
using namespace std;
void Solve(int index, vector<int>&arr, vector<vector<int>>&res, vector<int>&ds) {
    //base case 
    if(index == arr.size()) {
        res.push_back(ds);
        return;
    }

        
        ds.push_back(arr[index]);
        Solve(index + 1, arr, res, ds);
        //exclude
        ds.pop_back();
        Solve(index + 1,arr, res, ds);
    
}
vector<vector<int>> Subset(vector<int>&arr) {
    vector<vector<int>>result;
    vector<int>ds;
    Solve(0, arr, result, ds);
    return result;
}
int main() {
    cout << "Subset of an array" << endl;
    vector<int>arr = {3,2,1};
    vector<vector<int>>result = Subset(arr);
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