#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    for(int i=0; i<s.length(); i++){
        int d = s[i]-'0';
        int inv = 9-d;

        if(i==0 && d==9){
            continue; // first digit cannot be 0
        }

        if(inv < d){
            s[i]=(inv+'0');
        }

        // this is also correct
        // if(d >= 5){
        //     s[i]=(inv+'0');
        // }
    }

    cout << s << "\n";

    return 0;
}