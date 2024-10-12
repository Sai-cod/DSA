#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[10] = {3,2,3,2,5,6};
    map<int ,int> mpp;
    for(int i=0;i<6;i++) {
        mpp[arr[i]]++;
    }
    int q;
    cout << "Enter the number of queries : ";
    cin >> q;
    while(q--) {
        int n;
        cin >> n;
        cout << mpp[n];
    }
}