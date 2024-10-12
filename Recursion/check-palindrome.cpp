#include<iostream>
using namespace std;
int pal(int i,string a) {
    if(i==a.size()/2) return 1;
    if(a[i]!=a[a.size()-1-i]) return 0;
    return pal(i+1,a);
}
int main() {
    string n = "loop";
    // cout << n.size();
    cout << pal(0,n);
}