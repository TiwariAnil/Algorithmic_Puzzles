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
/*  The Doer's code  */
/*   INPUT


1000000009 , 100005
*/
#include <cstdio>
#include <cstdlib>
int len;
long long ans=100000000000000,X,ram=10;
long long sexybitch(long long a, int m, int n)
{
	error(a);
	if(a >= X)
	{
		if(m==n)
		   if(a < ans && a!=0 )//|| ans==0)
		   {
		   	ans=a;
		   }
	}
	if(a>=1000*X)
	 return 1;
	 sexybitch(a*10+4,m+1,n);
	 sexybitch(a*10+7,m,n+1);
}
int solve()
{
	if(X==0)
	{
	 cout<<47;
	return 1;
	}
	else
	if(len%2==1)
	{
		int y=(len+1)/2;
		FOR(i,0,y)
		{
			cout<<4;
		}
		FOR(i,0,y)
		{
			cout<<7;
		}
		return 1;
	}
	sexybitch(0,0,0);
	cout<<ans;
    
	 return 1;
}

bool input()
{
	 sl(X);
	 int p=X;
	 while(p)
	  {
	   p=p/10;
	   len++;
	  }
	return true;

}

int main()
{
    int T=1;
    //s(T);
    for(int testnum=1;testnum<=T;testnum++)
    {
        if(!input()) break;

        solve();
        //printf("\n");

    }
    return 0;
}


