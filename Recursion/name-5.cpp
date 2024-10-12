#include<iostream>
using namespace std;

void printname(int n,string a){

    if(n==0)
    return;
    else 
    cout << a << endl;
    printname(n-1,a);
}

int main() {
    string name = "Sairaj";
    int n = 5;
    printname(n,name);
}