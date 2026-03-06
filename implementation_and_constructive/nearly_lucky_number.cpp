#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long num;
    cin >> num;

    long long cnt=0;

    while(num>0){
        int dig = num%10;

        if(dig==4 || dig==7){
            cnt++;
        }

        num/=10;
    }

    if(cnt==4 || cnt==7){
        cout << "YES" << "\n";
    }else{
        cout << "NO" << "\n";
    }

    return 0;
}