// C. Spring
// simple set qns

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll lcm(ll a, ll b)
{
    if (a == 0 || b == 0)
        return 0;
    return (a / __gcd(a, b)) * b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        ll a, b, c, m;
        cin >> a >> b >> c >> m;

        ll A = m / a; // collecting days of a
        ll B = m / b; // collecting days of b
        ll C = m / c; // collecting days of c

        ll AB = m / lcm(a, b);
        ll BC = m / lcm(b, c);
        ll AC = m / lcm(a, c);

        ll ABC = m / lcm(lcm(a, b), c);

        ll onlyA = A - AB - AC + ABC;
        ll onlyB = B - AB - BC + ABC;
        ll onlyC = C - AC - BC + ABC;

        ll ABonly = AB - ABC;
        ll AConly = AC - ABC;
        ll BConly = BC - ABC;

        ll alice =
            6 * onlyA +
            3 * ABonly +
            3 * AConly +
            2 * ABC;

        ll bob =
            6 * onlyB +
            3 * ABonly +
            3 * BConly +
            2 * ABC;

        ll carol =
            6 * onlyC +
            3 * AConly +
            3 * BConly +
            2 * ABC;

        cout << alice << " " << bob << " " << carol << "\n";
    }

    return 0;
}