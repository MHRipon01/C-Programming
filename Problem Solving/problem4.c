// Given a number N and an array A of N numbers. Print the array after doing the following operations:

// Find minimum number in these numbers.
// Find maximum number in these numbers.
// Swap minimum number with maximum number.
// Input
// First line contains a number N (2 ≤ N ≤ 1000) number of elements.

// Second line contains N numbers ( - 105 ≤ Ai ≤ 105)

// It's guaranteed that all numbers are distinct.

// Output
// Print the array after the replacement operation.

// Example
// InputCopy
// 5
// 4 1 3 10 8
// OutputCopy
// 4 10 3 1 8

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n + 5];
    for (int i =0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int min = a[0], max = a[0], min_pos = 0, max_pos = 0;

    for (int i = 0; i < n; i++)
    { 
        if (a[i] < min) // for min
        {
            min = a[i];
            min_pos = i;
        }

        if (a[i] > max)//for max
        {
            max = a[i];
            max_pos = i;
        }
    }

    int temp = a[min_pos];

    a[min_pos] = a[max_pos];
    a[max_pos] = temp;

   for(int i = 0 ; i<n;i++){
    printf("%d ",a[i]);
   }

   printf("\n");

    return 0;
}