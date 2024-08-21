#include<bits/stdc++.h>
using namespace std;

vector<int>twoSum(int target, vector<int>&array) {

  int start = 0;
  int end = array.size() - 1;

  while(start != end) {
    if(array[start] + array[end] == target) {
      return {start , end};
    }else if(array[start] + array[end] > target) {
      end--;
    }else {
      start++;
    }
  }

  return {};



}

int main() {
  cout << "2 pointer problems " <<endl;
  vector<int>arr = {2,11,15,7};
  int target = 9;
  vector<int>res = twoSum(target , arr);
  for(auto i : res) {
    cout << "the result of an array is" << i << endl;
  }
  
  return 0;
}