// Given a number N and an array A of N numbers. Determine if the array is lucky or not.

// Note: the array is lucky if the frequency (number of occurrence) of the minimum element is odd.

// Input
// First line contains a number N (2 ≤ N ≤ 1000) number of elements.

// Second line contains N numbers ( - 105 ≤ Ai ≤ 105).

// Output
// Print "Lucky" (without quotes) if the frequency of the minimum element is odd, otherwise print "Unlucky"(without quotes).

// Examples
// InputCopy
// 5
// 8 8 9 5 9
// OutputCopy
// Lucky
// InputCopy
// 5
// 3 3 3 5 3
// OutputCopy
// Unlucky
// Note
// First Example :

// minimum element is 5 and its frequency is 1 and it's ODD so the array is lucky.

// Second Example :

// minimum element is 3 and its frequency is 4 and it's EVEN so the array is not lucky.

#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    int a[n + 5];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int min = a[0];

    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }

    // counting the frequency
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == min)
        {
            cnt++;
        }
    }


//checking if the count is odd or even
    if (cnt % 2 == 0)
    {
        printf("Unlucky\n");
    }
    else
    {
        printf("Lucky\n");
    }

    return 0;
}
 