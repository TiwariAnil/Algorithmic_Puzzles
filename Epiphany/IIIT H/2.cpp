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
#define Max 103
#define infi 0
char G[Max][Max], V[Max][Max];
int n, m ,C;
int flag=0;

int x[]={1,0,0,-1};
int y[]={0,1,-1,0};
void dfs(int i, int j)
{
	if(i==n-1 && j==n-1)
	{
		flag=1;
		return ;
	}
	if(G[i][j]!='D' && flag==0)
    {
    	G[i][j]='D';
		FOR(t,0,4)
		{
			int xx=i+x[t],yy=j+y[t];
			if(xx>=0 && xx<n && yy>=0 && yy<n && G[xx][yy]=='.')
			{
				dfs(xx,yy);
			}
		
		}
		G[i][j]='.';
    }
    return ;
}
/*
10
......DDDD
DDDDD.DDDD
....D.DDDD
.DD.D.DDDD
.DD.D.DDDD
.DD...DDDD
.DDDDDDDDD
.....DDDDD
DDDD.DDDDD
DDDD..D...



*/
 
int solve()
{
	dfs(0,0);
	if(flag==1)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	
        return 1;
}

bool input()
{
    s(n);
 	flag=0;   
    FOR(i,0,n)
        FOR(j,0,n)
            cin>>G[i][j], V[i][j]=infi;
            
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
    //system("pause");
    return 0;
}

