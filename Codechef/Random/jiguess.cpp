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

//int a[5555]={0};
int n,t1,t2;
int solve()
{
	long long i=0,t=0;
	int f1=0,f2=0;
 	while(i<n || f1==0 || f2==0)
 	{
 		t++;
 		//cout<<f1<<i<<f2;
 		if(t%t1==0 && f1==0)
 		   {
			  i+=1;
	        }
 		   
 		if(t%t2==0 && f2==0)
		  {
		   		   i+=1;   
 		  		   if(i>=n)
	           	    f2=1;
		  }
		    if(i>=n && t%t1==0)
	       	    f1=1;

		   
	 }
 	//if(t%t1 && )
 	cout<<i<<" "<<t;
 	

      return 1;
}

bool input()
{
   s(n);s(t1);s(t2);
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

