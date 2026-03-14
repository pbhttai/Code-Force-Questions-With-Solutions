#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    unordered_map<int,int> mp;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int x;
            cin>>x;
            mp[x]++;
        }
    }

    for(auto &p:mp){
        if(p.second > n*(n-1)){
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}