#include<bits/stdc++.h>
using namespace std;
bool checksort(int a[],int n) {
    for(int i=0;i<5;i++) {
        if(a[i+1]>=a[i]) {

        }
        else {
            return false;
        }
    }
    return true;
}
int main() {
    int arr[6] = {1,2,3,4,5,6};
    cout << checksort(arr,6);
}