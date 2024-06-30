#include<bits/stdc++.h>
using namespace std;
void ArrayPrint(vector<int>arr, int n) {
    // base case 
    if(n == arr.size()){
        return;
    }
    
    cout << arr[n] << endl ;
    return ArrayPrint(arr, n + 1 );

}
int main() {
    vector<int>arr = {9,4,5,6,7,8};
    
    ArrayPrint(arr, 0);
    return 0;
}