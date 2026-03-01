#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int max_idx=0, min_idx=0;

    for(int i=0; i<n; i++){
        if(arr[max_idx]<arr[i]){
            max_idx=i;
        }

        if(arr[min_idx]>=arr[i]){
            min_idx=i;
        }
    }

    int ans=0;

    ans+=(max_idx)+(n-min_idx-1);

    if(max_idx > min_idx){  // bcoz at one point there should swapping btw those max and min elements also which is overlapping
        ans--;
    }

    cout << ans << endl;
    
    return 0;
}