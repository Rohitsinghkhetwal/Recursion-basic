#include <bits/stdc++.h>
using namespace std;

int fact(int n) {
  // base case
  if(n == 0) {
    return 1;
  }
  return n * fact(n - 1);
}
int main() {
  cout << "Factorail program" << endl;
  int n = 5;
  int res = fact(n);
  cout << "The result of fact is " << res;
  return 0;
}