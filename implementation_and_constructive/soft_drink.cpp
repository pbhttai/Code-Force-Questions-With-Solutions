#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_drink = k*l;
    int toast_from_drink = total_drink/nl;   // we can make this amount of taost from drink

    int toast_from_lime = c*d;   // bcoz we need one slice per toast and [a/1=a]

    int toast_from_salt = p/np;   

    // total toast that we can make is the minimum of all
    int total_toast = min({toast_from_drink, toast_from_lime, toast_from_salt});

    cout << total_toast/n << endl;    // each friends have

    return 0;
}