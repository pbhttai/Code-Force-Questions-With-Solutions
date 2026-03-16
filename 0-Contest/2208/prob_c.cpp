// C. Stamina and Tasks

#include <bits/stdc++.h>
using namespace std;

int n;
vector<double> c, p;

/* 
    dp(i)=max(dp(i+1),c[i]+m(i)*dp(i+1))
    multiplier should apply to future rewards
    so we have to do from 0 -> n
    we can't do n -> 0 as we do in many other dp problems
*/

double solve(int i, vector<double>& dp){   
    if(i==n){
        return 0;
    }

    if(dp[i]!=-1){
        return dp[i];
    }

    double skip=solve(i+1, dp);
    
    double m=1-p[i]/100.0;
    double take=c[i]+m*solve(i+1, dp);

    return dp[i]=max(take, skip);
}

double solve2(){
    vector<double> dp(n+1);
    dp[n]=0;

    for(int i=n-1; i>=0; i--){
        double skip=dp[i+1];

        double m=1-p[i]/100.0;
        double take=c[i]+m*dp[i+1];

        dp[i]=max(skip, take);
    }

    return dp[0];
}

double solve3(){
    double dp=0;

    for(int i=n-1; i>=0; i--){
        double skip=dp;

        double m=1-p[i]/100.0;
        double take=c[i]+m*dp;

        dp=max(skip, take);
    }

    return dp;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    cout << fixed << setprecision(10);

    while(t--){
        cin>>n;

        c.resize(n);
        p.resize(n);

        // vector<double> dp(n+1, -1);

        for(int i=0;i<n;i++)
            cin >> c[i] >> p[i];

        // cout << solve(0, dp) << "\n";
        // cout << solve2() << "\n";
        cout << solve3() << "\n";
    }

    return 0;
}