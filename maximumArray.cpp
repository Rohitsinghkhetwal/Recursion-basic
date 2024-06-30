#include <bits/stdc++.h>
using namespace std;
int findMax(vector<int>arr, int len) {
    //base case 
    if(len == arr.size()){
        return arr[len];
    }
    int maxi = findMax(arr, len + 1);
    if(maxi > arr[len]) {
        return maxi;
    }else {
        return arr[len];
    }
}
int main() {
    cout << " finding the greatest number in array using recursion" << endl;
    vector<int>arr = {23,54,2, 87,34,78,98};
    int maximum = findMax(arr, 0);
    cout << "The maximum element is " << maximum << endl;
    return 0;
}