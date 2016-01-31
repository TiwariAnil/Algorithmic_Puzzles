#include <iostream>
#include <cmath>
#include<stdio.h>
#define s(n)                    scanf("%d",&n)
using namespace std;

int main ()
{
 	 
	 int limit = 1000000000; 
  	 int root = ceil(sqrt(limit));
 	 bool sieve[limit];
   	 int primes[(limit/2)+1];
 	 int insert = 2;
 	 primes[0] = 2;
 	 primes[1] = 3;
 
    //for (int z = 0; z < limit; z++)
      //  sieve[z] = false;        //Not all compilers have false as the default boolean value

    for (int x = 1; x <= root; x++)
 	{
 	    for (int y = 1; y <= root; y++)
  		{
                                  //Main part of Sieve of Atkin
    	    unsigned long long n = (4*x*x)+(y*y);
 			if (n <= limit && (n % 12 == 1 || n % 12 == 5)) sieve[n] ^= true;
 			n = (3*x*x)+(y*y);
 			if (n <= limit && n % 12 == 7) sieve[n] ^= true;
 			n = (3*x*x)-(y*y);
 			if (x > y && n <= limit && n % 12 == 11) sieve[n] ^= true;
 		}
    }
 //Mark all multiples of squares as non-prime
 
for (int r = 5; r <= root; r++)
                if (sieve[r])
                          for (int i = r*r; i < limit; i += r*r)
                                         sieve[i] = false;
	 //Add into prime array
	 for (int a = 5; a < limit; a++)
	 {
	  	 if (sieve[a])
	    	{
	                     primes[insert] = a;
	                      insert++;
	        }
	 }
	 int n;
	 s(n);
	 int a;
	 while(n--)
	 {
		s(a);
		printf("%d\n",2*primes[a-1]);		
	}
}
