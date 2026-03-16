// A. Passing the Ball

#include <bits/stdc++.h>
using namespace std;

int solve(){  // greedy approach
    int n;
    cin >> n;

    string s;
    cin >> s;

    for(int i=0; i<n; i++){
       if(s[i]=='L') {
        return i+1;
       }
    }

    return n;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        cout << solve() << "\n";
    }

    return 0;
}