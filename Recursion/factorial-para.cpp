#include<iostream>
using namespace std;

void fact(int n, int pro) {
    if(n==1) cout << pro * n;
    else fact(n-1,pro*n);
}

int main() {
    int n;
    cin >> n;
    int pro = 1;
    fact(n, pro);
}