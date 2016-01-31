#include <stdio.h>
#include <conio.h>
int main() 
{
    char str[] = "sadfghjllkweurqbsvz,uirqbtw,iayofsbemwiudfas aerwprogramming is really cool"; // original string.
    char hash[26] = {0}; // hash table.
    int i,j; // loop counter.
// iterate through the input string char by char.
for(i=0,j=0;str[i];)
{
    // if the char is not hashed.
    if(!hash[str[i] - 'a'])
    {
        // hash it.
        hash[str[i] - 'a'] = 1;
        // copy the char at index i to index j.
        str[j++] = str[i++];
    }
    else
    {
        // move to next char of the original string.
        // do not increment j, so that later we can over-write the repeated char.
        i++;
    }
}

// add a null char.
str[j] = 0;

// print it.
printf("%s\n",str); // "progamin s ely c" expected.

getch();
return 0;
}
