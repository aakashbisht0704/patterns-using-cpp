#include <iostream>

using namespace std;

int main(){
    int n = 4;
    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=n; j++){
            if(i==0 || i==n-1){
                cout << " *";
            }
            else {
                if(j==0 || j==n){
                    cout << " *";
                }
                else cout << "  ";
            }
        }
        cout << endl;
    }
}