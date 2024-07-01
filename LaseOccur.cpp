#include<bits/stdc++.h>
using namespace std;

int LastOccur(vector<int>arr, int len, int num) {
    //base case
    if(len == arr.size()) {
        return -1;
    }

    int result = LastOccur(arr, len + 1, num);
    if(result == -1) {
        if(arr[len] == num) {
            return len;
        }else {
            return -1;
        }
    }else {
        return result;
    }
    
}
int main() {
    cout << " Finding the last Occurance in an array" << endl;
    vector<int>arr = {4,5,9,3,9,2,9,2,4,1,6};
    int num = 4;
    int res = LastOccur(arr, 0, num);
    cout << "The last occurance will be " << res << endl;
    return 0;
}