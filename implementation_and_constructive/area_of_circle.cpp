#include <bits/stdc++.h> 
using namespace std; 
int main(){ 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    
    double pi=3.141592653;
    double r;
    cin >> r;
    
    cout << fixed << setprecision(9) << pi*r*r;
    return 0; 
    
}