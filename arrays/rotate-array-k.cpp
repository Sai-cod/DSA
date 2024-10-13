#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[5] = {1,2,3,4,5};
    int k;
    cout << "Rotate count : ";
    cin >> k;
    int turn;
    if(k>5) turn = k - 5;
    else turn = k;
    while(turn--) {
        int temp = arr[0];
        int i;
        for(i=0;i<4;i++) {
            arr[i] = arr[i+1];
        }
        arr[i] = temp;
    }
    for(int i=0;i<5;i++) {
        cout << arr[i] << " ";
    }
}