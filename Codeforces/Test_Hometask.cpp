#include <iostream>

using namespace std;

main () {
    int n,d[10]={0},i,c,sum=0;
    cin >> n;
    for (i=0;i<n;++i) {
        cin >> c;
        d[c]++;
        sum+=c;
    }
    if (sum%3!=0) 
      for (i=0;i<10;i++) 
        if (i%3==sum%3 && d[i]>0) {d[i]--;sum-=i;break;}
    for (n=0;n<2;n++) 
      if (sum%3!=0) 
        for (i=0;i<10;i++) 
          if (i%3>0 && d[i]>0) 
            {--d[i];sum-=i;}
    if (sum==0) d[0]=1;
    if (!d[0] || sum%3) cout << -1;
    else for (i=9;i>=0;--i) for (;d[i]--;) cout << i;
    cout << endl;
    cin>>n;
}
