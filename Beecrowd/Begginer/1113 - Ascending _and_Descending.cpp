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
#define  precise fixed << setprecision(1) 

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main()
{
    _
    int x, y; cin >> x >> y;

    while(x != y){ (x>y)?cout<< "Decrescente" << endl : cout << "Crescente" << endl; cin >> x >> y;}


    return 0;
}