/**
	CLown1331
	UVA prob10235 - Simply Emirp
	Verdict - AC
*/
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <cctype>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <set>
#include <bitset>
#include <utility>
#include <unordered_set>
#include <unordered_map>
#include <iterator>
#include <sstream>
#include <fstream>
#include <limits>
#include <new>
#include <memory>

using namespace std;

#define pb					push_back
#define F					first
#define S					second
#define EPS					1e-9
#define sf					scanf
#define pf					printf
#define si1(x)				scanf("%d",&x)
#define si2(x,y)			scanf("%d %d",&x,&y)
#define si3(x,y,z)			scanf("%d %d %d",&x,&y,&z)
#define sd1(x)				scanf("%lf",&x)
#define sd2(x,y)			scanf("%lf %lf",&x,&y)
#define sd3(x,y,z)			scanf("%lf %lf %lf",&x,&y,&z)
#define sl1(x)				scanf("%lld",&x)
#define sl2(x,y)			scanf("%lld %lld",&x,&y)
#define sl3(x,y,z)			scanf("%lld %lld %lld",&x,&y,&z)
#define sz(x)				(int)(x).size()
#define all(x)				(x).begin(), (x).end()
#define ms(x,a)				memset(x,a,sizeof(x))
#define REP(i,a,b)			for(int i=(a); i<(b); i++)
#define REPC(i,x)			for(int i=0; i<(sz(x)); i++)
#define REPIT(it,x)			for(__typeof((x).begin()) it=(x).begin(); it!=(x).end(); it++)

typedef long long int		LL;
typedef pair<int,int>		PII;
typedef vector<int>			VI;
typedef vector<LL>			VL;
typedef vector<string>		VS;
typedef vector<char>		VC;
typedef vector<bool>		VB;
typedef vector<PII>			VII;
typedef map<string,int>		MSI;
typedef map<int,int>		MII;
typedef map<char,int>		MCI;
typedef map<int,string>		MIS;

template<typename T> T Abs(T x) { return x>0 ? x : -x ; }
template<typename T> T const& Max(T const& a, T const& b) { return a>b ? a : b ; }
template<typename T> T const& Min(T const& a, T const& b) { return a<b ? a : b ; }
template<typename T> inline T gcd(T a, T b) { return (b ? gcd(b,a%b) : a) ; }
template<typename T> T sqaa(T a){ return a*a ; }
template<typename T> inline T powa(T x,T p){
	if(!p)
		return 1;
	else
		if(p&1)
			return x*powa(x,p-1);
		else{
			T ret = powa(x,p>>1);
			return ret*ret;
		}
}
constexpr int MAXN = 1e6 + 10 ;
int sqn = int(sqrt(MAXN));
bitset<MAXN> primes;
int main(){
	#ifdef LU_SERIOUS
		freopen("get.txt","r",stdin);
		freopen("got.txt","w+",stdout);
	#endif // LU_SERIOUS
	primes[0] = true;
	for(int i=4; i<MAXN; i+=2) primes[i] = true;
	for(int i=3; i<=sqn; i+=2)
		if(!primes[i])
			for(int j=i*i; j<MAXN; j+=i+i)
				primes[j] = true;
	int n, rev, h;
	while(si1(n) != EOF){
		h = n;
		rev = 0;
		while(h){
			rev *= 10;
			rev += h%10;
			h /= 10;
		}
		if(!primes[n] && !primes[rev] && rev!=n){
			pf("%d is emirp.\n",n);
		}else if(!primes[n]){
			pf("%d is prime.\n",n);
		}else{
			pf("%d is not prime.\n",n);
		}
	}
	return 0;
}

