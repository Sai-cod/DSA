#include<iostream>
using namespace std;

void printint(int i, int n) {
   if(i==0) 
   return;
   printint(i-1,n);
   cout << i << endl;
}

int main() {
    int n;
    cin >> n;
    int i = n;
    printint(i,n);
}