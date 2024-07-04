#include<bits/stdc++.h>
using namespace std;

vector<int>findAllOccur(vector<int>arr, int index, int num, vector<int>position) {
    // base case 
    if(index == arr.size()) {
        return position;
    }

    if(arr[index] == num) {
        position.push_back(index);
    }

    return findAllOccur(arr, index + 1, num, position);
    
    
}b

int main() {
    cout << "finding all ocurance of an array" << endl;
    vector<int>arr = {9,4,6,3,7,1,3,5,3,5,1};
    int num = 3;
    vector<int>res = findAllOccur(arr, 0, num, {});
    for(int elem: res) {
        cout << "The Elements are :" << elem << endl;
    }
    return 0;
}