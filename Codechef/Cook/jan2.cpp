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
#include<sstream>
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
#define all(c)                  (c).begin(),(c).end()
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

void chekarre(int * arr,int n)
{
    cout<<"[";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"]"<<endl;
}


int n, m ;
int ds, dt, t;
double dist1, dist2;

double DD( int ax, int ay, int  bx, int by )
{
    return sqrt( ( ax - bx ) * ( ax - bx ) + ( ay - by ) * ( ay - by ) );
}
int solve()
{
	double sm=ds+dt;
	if(sm<t)
		{
			printf("%.6lf\n",t-sm);
			return 1;
		}
		else
			{
				if(sm==t)
				   {
				   	cout<<"0.000000"<<endl;
					return 1;
				   }
				
				int mn=miN(ds, dt);
				FOR(i,1,mn+1)
					FOR(j,1,mn+1)
					{
						dist1=DD(0,0, i,j);
						dist2=DD(t,0, i,j);
						if(dist1 == ds || dist2 == dt)
							break;
					
					}
				/*
				double z=t/2;
				double cnt=1;
				while(1)
				{
					dist1=DD(0,0, z, cnt);
					dist2=DD(t,0, z, cnt);
					if(dist1 > ds || dist2 > dt)
						break;
					if(dist1 == ds && dist2 == dt)
					{
						cout<<"0.000000"<<endl;
					} 
				}				   
					cout<<abS(ds-dt)<<".000000"<<endl;			
 				*/
			}
    return 1;
}

bool input()
{
	s(ds);
	s(dt);
	s(t);
	return true;
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int T=1;
    s(T);
    for(int testnum=1;testnum<=T;testnum++)
    {
        if(!input()) break;

        solve();
        //printf("\n");

    }
//    system("pause");
    return 0;
}




