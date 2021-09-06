/*The sequence of triangle numbers is generated by adding the natural numbers. So the 7th triangle number would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. The first ten terms would be:

1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...

Let us list the factors of the first seven triangle numbers:

 1: 1
 3: 1,3
 6: 1,2,3,6
10: 1,2,5,10
15: 1,3,5,15
21: 1,3,7,21
28: 1,2,4,7,14,28
We can see that 28 is the first triangle number to have over five divisors.

What is the value of the first triangle number to have over five hundred divisors?*/

#include <stdio.h>

int main()
{
    int i = 0;
    int num = 0;
    int count = 0;
    while(1)
    {
        i++;
        num += i;
        
        for(int j=1; j <= num; j++)
        {
            if(num%j==0)
            {
                count++;
            }
        }
        
        if(count >= 500)
        {
            printf("%d\n", num);
            break;
        }
        else
            count = 0;          // reset
    
    }
    
    return 0;
}

// answer : 76576500
