#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[6] = {1,8,4,9,9,4};
    int l=INT32_MIN,sl = INT32_MIN;
    for(int i=0;i<6;i++) {
        if(arr[i]>l) {
            sl = l;
            l = arr[i];
        }
    }
    cout << "Second largest element : " << sl << endl;
}