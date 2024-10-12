#include<iostream>
using namespace std;

void printint(int i, int n) {
    if(i==n)
    return;
    printint(i+1,n);
    cout << i << endl;
}

int main() {
    int n;
    cin >> n;
    int i = 1;
    printint(i,n);
}