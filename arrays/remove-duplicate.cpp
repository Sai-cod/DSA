#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[7] = {1,1,4,4,4,5};
    int i=0;
    for(int j=1;j<6;j++) {
        if(arr[j]!=arr[i]) {
            arr[i+1] = arr[j];
            i++;
        }
    }
    cout << "The size of unique array : " << i+1 << endl;
    for(int i=0;i<6;i++) {
        cout << arr[i] << " ";
    }
} 