#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define ff first
#define ss second

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<": "; _print(x); cerr << endl;
#else
#define debug(x);
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}


template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


#define input_arr for(int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(ll i=s;i<e;i++)
#define test int t; cin>>t; while(t--)
#define fast_IO ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

void fast()
{

#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
	freopen("debug.txt", "w", stderr);
#endif

	fast_IO
	cout.tie(NULL);
}

void Sieve(int lmt, vector<int>& prime) {
	bool mark[lmt + 1];
	memset(mark, false, sizeof(mark));
	for (int i = 2; i <= lmt; ++i) {
		if (mark[i] == false) {
			prime.push_back(i);
			for (int j = i; j <= lmt; j += i)
				mark[j] = true;
		}
	}
}

void helper(int low, int high, vector<int>& store) {
	int lmt = floor(sqrt(high)) + 1;
	vector<int> prime;
	Sieve(lmt, prime);
	int n = high - low + 1;
	bool mark[n + 1];
	memset(mark, false, sizeof(mark));
	for (int i = 0; i < prime.size(); i++) {
		int lowLim = floor(low / prime[i]) * prime[i];
		if (lowLim == prime[i]) lowLim *= 2;
		if (lowLim < low)
			lowLim += prime[i];
		for (int j = lowLim; j <= high; j += prime[i])
			mark[j - low] = true;
	}
	for (int i = low; i <= high; i++)
		if (!mark[i - low]) store.push_back(i);
}


void solve()
{
	vector<int> prime;
	int l, r; cin >> l >> r;
	helper(l, r, prime);
	int n = prime.size();

	if (n == 0) cout << -1 << endl;
	else if (n == 1) cout << 0 << endl;
	else cout << prime[n - 1] - prime[0] << endl;
}


int main()
{
	fast();

	test
	{
		solve();
	}

	return 0;
}
