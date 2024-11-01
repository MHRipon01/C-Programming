// Given a number N. Print a diamond that has 2N rows.

// For more clarification see the example below.

// Input
// Only one line containing number N (1 ≤ N ≤ 99).

// Output
// Print the answer according to the required above.

// Example
// InputCopy
// 4
// OutputCopy
//    *
//   ***
//  *****
// *******
// *******
//  *****
//   ***
//    *
// Note
// Don't print any extra spaces after symbol " * ".
//________________________________________________

#include <stdio.h>

int main()
{
    int n, k = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++, k += 2)
    {
        int space = n - i;
        while (space--)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    k -= 2;
    for(int i = n;i>= 1; i--, k-=2){
        int space = n-i;
         while(space--){
            printf(" ");
         }
         for(int j =1;j<=k;j++){
            printf("*");
         }
         printf("\n");
    }

    return 0;
} 