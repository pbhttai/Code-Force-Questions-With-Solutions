#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll solve(){
    int n, h;
    cin >> n >> h;

    vector<ll> dirt(n);
    for(ll &x:dirt){
        cin >> x;
    }

    vector<ll> drain(n);

    for(int i=0; i<n; i++){
        ll curr=dirt[i];
        drain[i]=h-curr;

        for(int j=i+1; j<n; j++){
            curr=max(curr, dirt[j]);
            drain[i]+=h-curr;
        }
        
        curr=dirt[i];
        for(int j=i-1; j>=0; j--){
            curr=max(curr, dirt[j]);
            drain[i]+=h-curr;
        }
    }

    ll maxWater=0;

    for(int i=0; i<n; i++){
        ll currMax=dirt[i], idx=i;

        for(int j=i; j<n; j++){
            if(currMax < dirt[j]){
                currMax=dirt[j];
                idx=j;
            }

            maxWater=max(maxWater, drain[i]+drain[j]-drain[idx]);
        }
    }

    return maxWater;
    
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