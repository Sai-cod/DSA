#include<bits/stdc++.h>
using namespace std;
int main() {
    string a = "sairaj";
    map<char, int> mpp;
    for(int i=0;i<a.size();i++) {
        mpp[a[i]]++;
    }
    int q;
    cin >> q;
    while(q--) {
        char ch;
        cin >> ch;
        cout << mpp[ch];
    }
}