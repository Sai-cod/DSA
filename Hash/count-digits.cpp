#include<iostream>
using namespace std;

int main() {
    int arr[5] = {3,2,2,3,4};
    int hash[89] = {0};
    for(int i=0;i<5;i++) {
        hash[arr[i]]++;
    }
    cout << "Enter the number of queries : ";
    int q;
    cin >> q;
    while(q--) {
        int n;
        cin >> n;
        cout << hash[n];
    }
} 