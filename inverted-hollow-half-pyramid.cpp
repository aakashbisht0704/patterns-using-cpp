#include <iostream>

using namespace std;

int main(){
    int n = 10;
    for(int i=0; i<n; i++){
        for(int j=n-1; j>=i; j--){
            if(i==0 || j==i || j==n-1){
                cout << " *";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}