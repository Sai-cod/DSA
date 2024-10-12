#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[10] = {5,2,2,6,6,5,6,4};
    map<int , int> mpp;
    for(int i=0;i<8;i++) {
        mpp[arr[i]]++;
    }
    int max = 0,min = INT32_MAX;
    for(auto it : mpp) {
       if((it.second)>max) {
            max = it.first;
       }
    }
    for(auto it : mpp) {
       if((it.second)<min) {
            min = it.first;
       }
    }
    cout << "max frequency : " << max << endl << "Min frequency : " << min;
}