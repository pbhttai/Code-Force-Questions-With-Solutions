#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> sol;
        int place = 1;

        while(n>0){
            int dig = n%10;
            if(dig != 0){
                sol.push_back(dig*place);
            }

            place*=10;
            n/=10;
        }

        cout << sol.size() << endl;
        for(int &s:sol){
            cout << s << " ";
        }

        cout << "\n";
    }

    return 0;
}