#include <bits/stdc++.h>

using namespace std;

#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl '\n'
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

    ll i = 1, j=7;

    do{
        cout << "I=" << i << " J=" << j << endl;
        cout << "I=" << i << " J=" << j-1 << endl;
        cout << "I=" << i << " J=" << j-2 << endl;
        i+=2; j+=2;

    }while(i<=9);
    
    return 0;
}