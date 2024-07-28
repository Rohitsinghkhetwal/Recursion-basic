#include <bits/stdc++.h>
using namespace std;
void Solve(vector<int>&nums) {
     int n = nums.size();
        int low = 0;
        int mid = 0;
        int high = n - 1;
        while(mid <= high) {
            if(nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                    mid++;
                    low++;
                
            }else if(nums[mid] == 2) {
                 swap(nums[mid], nums[high]);
                    high--;
            }else {
                mid++;
               
                
            }
        }
        
}
int main() {
    vector<int>arr = {1,2,0,1,0,2,1,1,2};
    Solve(arr);
    
    return 0;
}