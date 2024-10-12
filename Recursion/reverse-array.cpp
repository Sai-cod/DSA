#include<iostream>
using namespace std;
void rev(int l, int r, int *a) {
    if(l==r) return;
    swap(a[l],a[r]);
    rev(l+1,r-1,a);
}
int main() {
    int arr[5] = {1,4,3,5,2};
    rev(0,4,arr);
    for(int i=0;i<5;i++) {
        cout << arr[i] << " ";
    }
}