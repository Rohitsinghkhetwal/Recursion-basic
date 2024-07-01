#include <bits/stdc++.h>
using namespace std;

int firstOccur(vector<int>arr, int d, int ind) {
    //base case 
    if(ind == arr.size()) {
        return -1;
    }
    // int first = firstOccur(arr, d, ind + 1);
    // //unwinding phase
    // if(arr[ind] == d) {
    //     return ind;
    // }else {
    //     return first;
    // }

    //optimized approach
    if(arr[ind] == d) {
        return ind;
    }else {
        int res = firstOccur(arr, d, ind + 1);
        cout <<  " this is the response " << res << endl;
        return res;
    }
}
int main() {
    cout << "first occurance in an array " << endl;
    vector<int>Arr = {9,3,9,6,3,7,5,9,7,6};
    int elem = 6;
    int res = firstOccur(Arr, elem, 0);
    cout << "The first occurance of an array will be the " << res << endl;
    return 0;
}