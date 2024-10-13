#include<bits/stdc++.h>
using namespace std;

int getParity(int n)
{
    int  parity = 0;
    while (n)
    {
        parity = !parity;
        n     = n & (n - 1);
    }     
    return parity;
}

int main() {
    //odd parity one-side
    int arr[10] = {1,5,3,6,7,10,45,88};
    int j=0,k;
    for(int i=0;i<8;i++) {
        if(getParity(arr[i])==0) {
            int temp = arr[i];
            for(k=i;k>j;k--) {
                arr[k] = arr[k-1];
            }
            arr[k] = temp;
            j++;
        }
    }
    for(int i=0;i<8;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << getParity(7);
}