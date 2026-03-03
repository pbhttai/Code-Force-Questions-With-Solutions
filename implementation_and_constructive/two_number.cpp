#include <bits/stdc++.h>
using namespace std;

int main(){
    double x,y;
    cin >> x >> y;

    // double result = 1.0 * x / y;

    cout << "floor " << x << " / " << y << " = " << floor(x/y) << "\n";
    cout << "ceil " << x << " / " << y << " = " << ceil(x/y) << "\n";
    cout << "round " << x << " / " << y << " = " << round(x/y) << "\n";

    return 0;
}