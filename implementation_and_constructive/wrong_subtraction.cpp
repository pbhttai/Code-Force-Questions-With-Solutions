#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    while (k--)
    {
        int lastDig=n%10;
        
        if(lastDig==0){
            n/=10;
        }else{
            n--;
        }
    }
    
    cout << n << "\n";

    return 0;
}