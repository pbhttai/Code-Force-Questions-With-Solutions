#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string s;

    int x=0;

    while(n>0){
        cin >> s;

        if(s.find("++")!=string::npos){
            x++;
        }else{
            x--;
        }

        n--;
    }

    cout << x << "\n";

    return 0;
}