#include <bits/stdc++.h>
using namespace std;
int Solve(int ind, vector<int>arr) {
    // base case
    if(ind == arr.size()) {
      return arr[ind];
    }
    int res = Solve(ind + 1, arr);
    if(arr[ind] < res) {
        return res;
    }else {
        return arr[ind];
    }

}
int main() {
    cout << "Find the maximum element in array" << endl;
    vector<int>arr = {5,33,24,23,66,23,98};
    int result = Solve(0, arr);
    cout << "The largest number is " << result << endl;
    
    return 0;
}