#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll k,n,w;
    cin>>k>>n>>w;

    ll cost_w_banana=0;

    for(int i=1; i<=w; i++){
        cost_w_banana+=(i*k);
    }

    ll money_he_want=(cost_w_banana-n)<0?0:cost_w_banana-n;

    cout << money_he_want << "\n";
    return 0;
}