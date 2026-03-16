// B. Right Maximum

#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin >> n;

    int mx=INT_MIN;
    int ans=0;

    while(n--){
        int x;
        cin>>x;

        if(mx<=x){
            mx=x;
            ans++;
        }
    }

    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        cout << solve() << "\n";
    }

    return 0;
}