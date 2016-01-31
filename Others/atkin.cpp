#include <iostream>
#include <cmath>
//#include <>
using namespace std;

int main ()
{
    int x, y,min;
//	cin>>min;
	//x=sqrt(min/2);
	//y=x;
	int limit;
	cin>>limit;//0000;
	int root = ceil(sqrt(limit));
	bool sieve[limit];//={0};
	int primes[(limit/2)+1];
	int insert = 2;
	primes[0] = 2;
	primes[1] = 3;
	for (int z = 0; z < limit; z++) 
	       sieve[z] = false; //Not all compilers have false as the default boolean value
	for (x = 1; x <= root; x++)
	{
		for ( y = 1; y <= root; y++)
		{
			//Main part of Sieve of Atkin
			int n = (4*x*x)+(y*y);//maximum prime
			if (n <= limit && (n % 12 == 1 || n % 12 == 5)){sieve[n] ^= true;cout<<n<<"-";}
			n = (3*x*x)+(y*y);
			if (n <= limit && n % 12 == 7){sieve[n] ^= true;cout<<n<<"*";}
			n = (3*x*x)-(y*y);  //minimum prime
			if (x > y && n <= limit && n % 12 == 11){sieve[n] ^= true;cout<<n<<"&";}
		}
	}
	//Mark all multiples of squares as non-prime
	for (int r = 5; r <= root; r++) 
	  if (sieve[r])
	      for (int i = r*r; i < limit; i += r*r)
		             sieve[i] = false;
	//Add into prime array
    int a;
	for (a = 5; a < limit; a++)
	{
		if (sieve[a])
		{
			primes[insert] = a;
			insert++;
		}
	}
	//	int primes[(limit/2)+1];
//	for (int z = 0; z < insert; z++) 
//	   cout<<primes[z]<<" ";
	return 0;
}
