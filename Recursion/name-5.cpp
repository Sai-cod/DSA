#include<bits/stdc++.h>
using namespace std;
void printname(int n){
    if(n==0)
    return;
    else 
    cout << "I Love Recursion" << endl;
    printname(n-1);
}

int main() {
    int N;
    cin >> N;
    printname(N);
}