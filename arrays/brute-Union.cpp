#include<bits/stdc++.h>
using namespace std;

int main() {
    set<int> set;
    int a[5] = {1,2,4,3,7};
    int b[3] = {1,4,8};
    for(int i=0;i<5;i++) {
        set.emplace(a[i]);
    }
    for(int i=0;i<3;i++) {
        set.emplace(b[i]);
    }
    for(auto it:set) {
        cout << it << " " ;
    }
}