#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;

    int hard=false;

    for (int i = 0; i < n; i++){
        int op;
        cin >> op;

        if(op==1){
            hard=true;
        }
    }

    if(!hard){
        cout << "EASY" << "\n";
    }else{
        cout << "HARD" << "\n";
    }    

    return 0;
}