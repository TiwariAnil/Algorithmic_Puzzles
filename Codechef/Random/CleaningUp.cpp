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
#define mp                      make_pair
#define pb                      push_back


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

3
6 3
2 4 1
3 2
3 2
8 2
3 8

*/





int n,m;
vector <int> arr;

int solve()
{
	int test=-1;
	FOR(i,0,arr.size())
	{ if(arr[i]!=0)
	     test++;
		 
		if(test%2==0 && arr[i]!=0 )
		 { p(arr[i]);arr[i]=0;printf(" ");}
	}
	cout<<endl;
	
	FOR(i,0,arr.size())
	{
		if(arr[i]!=0)
		 {p(arr[i]);printf(" ");}
	}
	cout<<endl;
    arr.clear();
 	return 1;
}

bool input()
{
 	 s(n);s(m);
 	 FOR(i,1,n+1)
 	 {
 	 	arr.push_back(i);
 	 }
 	 
 	 int t;
 	 FOR(i,1,m+1)
 	 {
 	 	s(t);
 	 	arr[t-1]=0;
 	 }
 	 //cout<<endl;
    return true;
}

int main()
{
    int T=1;
    s(T);
    for(int testnum=1;testnum<=T;testnum++)
    {
        if(!input()) break;

        solve();
        //printf("\n");

    }
    return 0;
}


