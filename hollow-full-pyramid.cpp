#include <iostream>

using namespace std;

void hollowFullPyramid(int n){
    for(int i=0; i<n;i++){
        for(int j=0; j<(n-i-1); j++){
            cout << " ";

        }
        
        for(int j=0; j<i+1; j++){
            if(i==0 || i==n-1 || j==0 || j==i){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }  
        cout << endl;  
    }
}   

int main(){
    int n = 10;
    hollowFullPyramid(n);
}