#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    int minCap=0;
    int curr=0;

    while (n--)
    {
        int a,b;
        cin>>a>>b;

        if(curr!=0){
            curr-=a;
        }

        curr+=b;
        minCap=max(minCap, curr);
    }

    cout << minCap << "\n";

    return 0;
}