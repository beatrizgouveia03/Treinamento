#include <bits/stdc++.h>

using namespace std;

#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define f first
#define s second
#define ii pair<int, int>
#define vi vector<int>
#define  precise fixed << setprecision(2) 

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main()
{
    _
    
    int x, y; cin >> x >> y;

    while(y <= x) cin >> y;
    
    int count = 0;

    while(y >=0) {y-=x++;count++;}

    cout << count << endl;

    return 0;
}