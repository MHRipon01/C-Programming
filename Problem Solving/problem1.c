// Given a number N. Print the factorial of number N.

// Input
// First line contains a number T (1 ≤ T ≤ 15) number of test cases.

// Next T lines will contain a number N (0 ≤ N ≤ 20)

// Output
// For each test case print a single line contains the factorial of N.

// Example
// InputCopy
// 2
// 5
// 3
// OutputCopy
// 120
// 6
// Note
// Factorial, in mathematics, the product of all positive integers less than or equal to a given positive integer and denoted by that integer and an exclamation point.

// Thus, factorial seven is written 7!, meaning 1 * 2 * 3 * 4 * 5 * 6 * 7 = 5040 .

// Factorial zero is defined as equal to 1.

// In first test case for N = 5 , 5! = 1 * 2 * 3 * 4 * 5 = 120 so the answer is 120.

// In Second test case for N = 3 , 3! = 1 * 2 * 3 = 6 so the answer is 6.
//_____________________________________________________________________________________________

#include <stdio.h>
int main()
{

    int t;
    scanf("%d", &t);

    for (int cs = 1; cs <= t; cs++)
    {
        int n;
        scanf("%d", &n);
       long long fact =1;
        for (int i = 1; i <= n; i++)
        {
            // multiple of all the value of i
            fact *= i;
        }

        printf("%lld\n", fact);
    }
    
    return 0;
}