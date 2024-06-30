#include <bits/stdc++.h>
using namespace std;
int power(int x, int n) {
    if(n == 0) {
        return 1;
    }
    int res = power(x, n - 1);
    int xn = x * res;
    return xn;
}
int  main() {
    int result = power(4, 4);
    cout << "The power will be the " << result;
    return 0;
}