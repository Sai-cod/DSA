#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[9] = {1,0,5,0,0,8,0,0,8};
    int j=0;
    for(int i=0;i<9;i++) {
        if(arr[i]!=0) {
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(int i=0;i<9;i++) {
        cout << arr[i] << " ";
    }
}