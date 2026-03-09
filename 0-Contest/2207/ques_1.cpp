#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        string s;
        cin>>x>>s;

        for (int i = 1; i < x-1; i++)
        {
            if(s[i-1]=='1' && s[i+1]=='1'){
                s[i]='1';
            }
        }

        int maxOnes=0;
        for (int i = 0; i < x; i++)
        {
            if(s[i]=='1'){
                maxOnes++;
            }
        }

        for (int i = 1; i < x-1; i++)
        {
            if(s[i-1]=='1' && s[i+1]=='1'){
                s[i]='0';
            }
        }

        int minOnes=0;
        for (int i = 0; i < x; i++)
        {
            if(s[i]=='1'){
                minOnes++;
            }
        }

        cout << minOnes << " " << maxOnes << "\n";        
    }
    
    return 0;
}