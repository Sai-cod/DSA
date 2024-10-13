#include<bits/stdc++.h>
using namespace std;
int main() {
    int a[5] = {1,2,3,4,7};
    int b[3] = {1,4,8};
    int i=0,j=0;
    vector<int> v;
    while(i<5 && j<3) {
        if(a[i]<=b[j]) {
            if(v.size()==0||v.back()!=a[i]) {
                v.push_back(a[i]);
            }
            i++;
        }
        else {
            if(v.size()==0||v.back()!=b[j]) {
                v.push_back(b[j]);
            }
            j++;
        }
    }
    while(i<5) {

        if(v.size()==0||v.back()!=a[i]) {
            v.push_back(a[i]);
        }
        i++;    
    }

    while(j<3) {
        if(v.size()==0||v.back()!=a[j]) {
            v.push_back(b[j]);
        }
        j++; 
    }
    for(auto it:v) {
        cout << it << " ";
    }
}