#include <iostream>

using namespace std;

void invertedFullPyramid(int n){
    for(int i=0; i<n;i++){
        for(int j=0; j<i; j++)
            cout << " ";

        for(int j=0; j<(n-i); j++)
            cout << "* ";

        cout << endl;
    }
}

int main(){
    int n=10;

    invertedFullPyramid(n);
}