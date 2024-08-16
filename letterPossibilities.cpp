#include <bits/stdc++.h>
using namespace std;


void PossibleTiles(int ind, string arr, int &count, unordered_set<string>&seen ) {
  // base case
  seen.insert(arr);
  count++;

  for(int i = ind; i < arr.size(); i++) {
    if(i == ind || arr[ind] != arr[i]) continue;
    //swap
    swap(arr[ind], arr[i]);
    PossibleTiles(ind + 1, arr,count , seen);
  }
  return;
}

int Solve(string arr) {
  int count = 0;
  unordered_set<string>seen;
  sort(arr.begin(), arr.end());
  PossibleTiles(0, arr, count, seen);
  
  return count;
}
int main() {
  cout << "Letter possibilities tiles" << endl;
  string arr = "AAB";
  int res = Solve(arr);
  cout << "THe result will be " << res << endl;
  return 0;
}