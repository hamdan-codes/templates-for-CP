/*
 * Author: Chaudhary Hamdan (https://chaudharyhamdan.me/)
 *
 * Generated at : Sun Apr  3 23:00:20 2022
 *
 * C++ Template for Competitive Programming
 * Github link: https://github.com/hamdan-codes
 *
 * Template available at my Github
 * Repository Link:-
 * https://github.com/hamdan-codes/templates-for-CP/
 */




#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/exception.hpp>
#include <ext/pb_ds/hash_policy.hpp>
#include <ext/pb_ds/list_update_policy.hpp>
#include <ext/pb_ds/tag_and_trait.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/trie_policy.hpp>

#define ff                 first
#define ss                 second
#define int                long long
#define amax(a,b)          if(b>a) swap(a, b)
#define amin(a,b)          if(b<a) swap(a, b)
#define putmax(a,b)        a = max(a, b)
#define putmin(a,b)        a = min(a, b)
#define pb                 push_back
#define mp                 make_pair
#define ii                 int, int
#define pii                pair<ii>
#define vi                 vector<int>
#define vvi                vector<vi>
#define si                 set<int>
#define pi                 print<int>
#define pc                 print<char>
#define ps                 print<string>
#define vpii               vector<pii>
#define vs                 vector<string>
#define vc                 vector<char>
#define gi                 greater<int>
#define umii               unordered_map<ii>
#define mii                map<ii>
#define max_heap           priority_queue<int>
#define min_heap           priority_queue<int, vi, gi>
#define all(x)             x.begin(), x.end()
#define rev(x)             reverse(all(x))
#define setbits(x)         __builtin_popcountll(x)
#define zerobits(x)        __builtin_ctzll(x)
#define deb(x)             cout << #x << "= " << x << endl;
#define py                 cout<<"YES"<<endl
#define pn                 cout<<"NO"<<endl
#define pimp               cout<<"IMPOSSIBLE"<<endl
#define pans               cout<<ans<<endl
#define gcd                __gcd
#define mod                1000000007
#define PI                 3.14159265358979323846264338
#define inf                LONG_LONG_MAX
#define pcs(x,y)           fixed << setprecision(y) << x
#define endl               '\n'
#define maxelem(a)         *max_element(all(a))
#define minelem(a)         *min_element(all(a))
#define lower(s)           transform(all(s), s.begin(), ::tolower)
#define upper(s)           transform(all(s), s.begin(), ::toupper)
#define mk(t,arr,n)        t *arr = new t[n]
#define FI(i,x,y,inc)      for(int i = x; i < y; i += inc)
#define F0(i,x)            FI(i, 0, x, 1)
#define F(i,x,y)           FI(i, x, y, 1)
#define RF(i,x,y)          for(int i = x; i >= y; i--)
#define rep(i,a)           for(auto &i : a)
#define W(x)               int zyx; cin >> zyx; F(x, 1, zyx + 1)
#define W1(x)              F(x, 1, 2)
#define take(a,n)          vi a(n); F0(ari, n) cin >> a[ari]
#define taken(type,a,n)    int n; cin >> n; vector<type> a(n); rep(i, a) cin >> i;
#define din(type,n)        type n; cin >> n
#define in(n)              cin >> n
#define printa(arr,n)      F0(i_ar, n) cout << arr[i_ar] << ' '; cout << endl
#define FAST               ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


using namespace std;

using namespace __gnu_pbds;
using namespace __gnu_cxx;

mt19937                    rng(chrono::steady_clock::now().time_since_epoch().count());
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;



void i_o_from_file() {

#ifndef ONLINE_JUDGE
	freopen("C:\\Users\\KIIT\\input", "r", stdin);
	freopen("C:\\Users\\KIIT\\output", "w", stdout);
#endif

}

template<typename T>
void print(int n, ...) {

	va_list ap;
	va_start(ap, n);

	F(i, 1, n + 1) {
		T a = va_arg(ap, T);
		cout << a << ' ';
	}
	cout << endl;

	va_end(ap);

	return;
}




/* ********************* Your Functions and Classes Below ********************** */
















/* ********************* Your Functions and Classes Above ********************** */

void solve_tests() {

	int ans = 0;












	pans;

	return;
}



int32_t main() {

	FAST;

	i_o_from_file();


	/* ******************* Your main function Code Below ******************* */





	W(tc) {


		// cout << "Case #" << tc << ": ";


		solve_tests();





	}




	/* **************** Your main function Code Above ****************** */

	return 0;
}
