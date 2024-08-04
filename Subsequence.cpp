#include<bits/stdc++.h>
using namespace std;
void SubSeq(int arr[], vector<int>&dts, int sz, int index) {
    // base case 
    if(index == sz) {
        for(auto it: dts) {
            cout << it << " " ;
        }
        if(dts.size() == 0) {
            cout << "{}" << endl;
        }
        cout << endl;
        return;
        //"'Cascadia Code', Menlo, Monaco, 'Courier New', monospace",
    }

    dts.push_back(arr[index]);
    SubSeq(arr, dts, sz, index + 1);
    dts.pop_back();
    SubSeq(arr, dts, sz, index + 1);

}
int main() {
    cout << "Finding the subseqence of an array" << endl;
    int arr[] = {3,1,2};
    int n = 3;
    vector<int>dts;
    SubSeq(arr, dts, n, 0);
    return 0;
}