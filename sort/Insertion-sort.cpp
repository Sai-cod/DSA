#include<bits/stdc++.h>
using namespace std;

int main() {
    //Always takes an element and places that in correct order
    int arr[6] = {1,5,3,7,4,66};
    for(int i=1;i<6;i++) {
        int j=i;
        while(arr[j-1]>arr[j]) {
            swap(arr[j],arr[j-1]);
            j--;
        } 
    } 
    for(int i=0;i<6;i++) {
        cout << arr[i] << " ";
    }
}