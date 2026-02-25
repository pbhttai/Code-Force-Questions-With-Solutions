#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    for(int i=1; i<=n; i++){
        if(i%2==1){  // if odd row then full with #
            for(int j=1; j<=m; j++){
                cout << "#";
            }

            cout<<"\n";
        }else if(i%4==0){  // if divisible by 4 means # at first and other is .
            cout<<"#";

            for(int j=2; j<=m; j++){
                cout<<".";
            }
            
            cout<<"\n";
        }else if(i%2==0){  // if i divisible by 2 then last will filled with #
            for(int j=1; j<m; j++){
                cout<<".";
            }
            cout<<"#"<<"\n";
        }
    }
    
    return 0;
}