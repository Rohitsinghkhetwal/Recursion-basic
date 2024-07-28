#include <bits/stdc++.h>
using namespace std;
int findElem(int i, vector<int>arr, int ele) {
    // base case
    if(i == arr.size()) {
        return -1;
    }

    int result = findElem(i + 1, arr, ele);
    if(result == -1) {
       if(arr[i] == ele) {
        return i;
       }else {
        return -1;
       }
    }else {
        return result;
    }
}
int main() {
    cout << "Finding the last Occurance of an array " << endl;
    vector<int>arr = {76,65,445,3,32,21,65,43,32};
    int elem = 65;
    int res = findElem(0, arr, elem);
    cout << "The largest Occurance of an array is " << res << endl;
    return 0;

}