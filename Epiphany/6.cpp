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


int n, m, a, b, c ;
int rgb[3];
int solve()
{
	sort(rgb, rgb+3);
	long long cnt=1, sum=0, tmp;
	//FOR(i,1,n+1)
	//{
		for(int x=0; x< rgb[0]+1 && x<n+1; x++)//FOR(x,0,rgb[0]+1)
		{
			//if(x<=i)
			//{
				for(int y=0; y< rgb[1]+1 && x+y<n+1; y++)//FOR(y,0,rgb[1]+1)
				{
					//if(x+y<=i)
					//{
						sum=n-(x+y);//x+y;
						tmp=miN(sum,rgb[2]);
						cnt+=tmp+1;
						//cout<<x<<" "<<y<<" "<<tmp;
						/*
						if(sum<=rgb[2])
						{
							cnt+=sum;
						}
						else
						{
							cnt+=rgb[2];
						}
						*/
						/*
						for(int z=0; z< rgb[2]+1 && x+y+z<i+1; x++)//FOR(z,0,rgb[2]+1)
						{
							if(i==(x+y+z))
							{
								cnt++;
							//	cout<<endl<<endl;
							}
							if(i<(x+y+z))
								break;
							
						}
						*/
					//}
					//else					    break;
				}
			//}
		//	else				break;
		}
		
	//}
	cout<<cnt-1<<endl;
    return 1;
}

bool input()
{
	cin>>n>>rgb[0]>>rgb[1]>>rgb[2];
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




