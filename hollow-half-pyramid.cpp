#include <iostream>

using namespace std;

int main(){
    int n = 5;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            if(i==0 || i==1 || i==n-1){
                cout << " *";
            }
            else{
                if(j==0 || j==i){
                    cout << " *";
                }
                else cout << "  ";
            }
        }
        cout << endl;
    }
}