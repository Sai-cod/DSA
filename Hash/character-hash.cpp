#include<iostream>
using namespace std;
int main() {
    string a = "sairaj";
    int hash[26] = {0};
    char ch;
    int index;
    for(int i=0;i<a.size();i++) {
        ch = a[i];
        index = ch - 'a'; 
        hash[index]++;
    }
    cout << "Enter the number of queries : ";
    int q;
    cin >> q;
    while(q--) {
        cin >> ch;
        index = ch - 'a'; 
        cout << hash[index];
    }
}