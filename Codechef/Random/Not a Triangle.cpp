//Data Structure includes
#include<vector>
#include<stack>
#include<set>
#include<map>
#include<queue>
#include<deque>
#include<string>
//Other Includes
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cassert>
#include<cstdlib>
#include<cstdio>
#include<cmath>
//some common functionn
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define FOR(i,a,b)              for(int i=a;i<b;i++)
#define FORs(i,a,b)             for(int i=a;i>=b;i--)
#define fill(a,v)               memset(a,v,sizeof a)
#define abS(x)                  ((x)<0?-(x):(x))
#define mP                      make_pair
#define pB                      push_back
#define error(x)                cout << #x << " : " << (x) << endl
// Input macros
#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sl(n)                       scanf("%lld",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)

// Output macros
#define p(n)                        printf("%d",n)
#define pc(n)                       printf("%c",n)
#define pl(n)                       printf("%lld",n)
#define pf(n)                       printf("%lf",n)
#define ps(n)                       printf("%s",n)

using namespace std;

typedef long long LL;
typedef pair<int,int> PII;
typedef pair<LL,LL> PLL;
typedef pair<int,PII> TRI;
typedef vector<int> VI;
typedef vector<LL> VL;
typedef vector<PII> VII;
typedef vector<PLL> VLL;
typedef vector<TRI> VT;
typedef vector<VI> VVI;
typedef vector<VL> VVL;
typedef vector<VII> VVII;
typedef vector<VLL> VVLL;
typedef vector<VT> VVT;

using namespace std;

/*   INPUT


1000000009 , 100005
*/


int n,m,a[5000]={0};

int solve()
{
	int cnt=0,p,k;
	sort(a,a+n);
	FORs(i,n-1,2)
	{
		 p=0;
		 k=i-1;
		 while(k>p)
		 {
		 	if(a[i]>a[p]+a[k])
			{
				cnt+=k-p;
				p++;
			}
			else
			k--;
		 }
  	}
	cout<<cnt<<endl;
 	return 1;
}

bool input()
{
	 s(n);
	 if(n==0)
			 return false;
	 FOR(i,0,n)
	 {
	 	s(a[i]);
	 }
    return true;
}

int main()
{
    int T=1;
   // s(T);
    //for(int testnum=1;testnum<=T;testnum++)
	while(1)
	{
        if(!input()) break;

        solve();
        //printf("\n");

    }
    return 0;
}


