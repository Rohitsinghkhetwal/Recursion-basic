#include<bits/stdc++.h>
using namespace std;
void Solve(string ip, string op) {
    // base case
    if(ip.length() == 0) {
        cout << op << endl;
        return;
    }

    string op1 = op;
    string op2 = op;

    op1 += ip[0];
    op2 = op2 + "_" + ip[0];
    ip.erase(op.begin() +0);
    Solve(ip , op1);
    Solve(ip, op2);
    return;

}

int main() {
    cout << "Print spaces" << endl;
    
    string ip = "abc";
    string op = "";
    op.push_back(ip[0]);
    ip.erase(ip.begin() + 0);
    Solve(ip, op);
   
    return 0;
}