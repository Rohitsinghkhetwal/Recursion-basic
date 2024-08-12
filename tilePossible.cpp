#include <bits/stdc++.h>
using namespace std;


void helper(string tiles, int start, int &count ) {
  count++;
  
  for(int i = start; i < tiles.size(); i++) {
    if(i == start || tiles[start] != tiles[i]) {
    swap(tiles[start], tiles[i]);
    helper(tiles, start + 1, count);
     
    }
    
  }
  return;

}

int Solve(string tiles) {
  int start = 0;
  int count = 0;
  helper(tiles, start, count);
  return count;
}


int main() {
  cout << "letter tile Possibilities" << endl;
  string tiles = "AAB";
  sort(tiles.begin(), tiles.end());
  int res = Solve(tiles);
  cout << "the result is " << res << endl;
  return 0;
}