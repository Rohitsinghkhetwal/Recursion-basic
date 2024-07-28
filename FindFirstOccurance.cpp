#include <bits/stdc++.h>
using namespace std;
int Solve(int ind, vector<int>arr, int elem) {
    // base case
    if(ind == arr.size()){
        return arr[ind];
    }
    if(arr[ind] == elem){
        return ind;
    }else {
        int recurance = Solve(ind + 1, arr, elem);
        return recurance;
    }
}
int main() {
    cout << "Print the first Occurance of an array" << endl;
    vector<int>arr = {5,3,45,36,4,6,3,45,3,15,2,5};
    int elem = 45;
    int resu = Solve(0, arr, elem);
    cout << "The first recurance if an array is " << resu << endl;
    return 0;
}