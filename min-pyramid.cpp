#include <iostream>

using namespace std;

void firstHalfOfMin(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout << "* ";
        }
        for(int j=0; j<(2*i)+1; j++){
            cout << "  ";
        }
        for(int j=0; j<n-i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void secondHalfOfMin(int n){
    for(int i=0; i<=n; i++){
        for(int j=0; j<i; j++){
            cout << "* ";
        }
        for(int j=0; j<(2*(n-i))+1; j++){
            cout << "  ";
        }
        for(int j=0; j<i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){
    int n = 11;
    firstHalfOfMin(n);
    secondHalfOfMin(n);
}