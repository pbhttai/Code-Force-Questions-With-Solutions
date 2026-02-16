#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v(3);
    for(int i=0; i<3; i++){
        cin >> v[i];
    }

    // they have to meet at a point where they cover minimum total distance, which will be medium after sorting these three points
    sort(v.begin(),v.end()); 
    
    cout << (v[1]-v[0])+(v[2]-v[1]) << endl;  // total minimum distance sum

    return 0;
}