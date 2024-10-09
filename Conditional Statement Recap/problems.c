#include <stdio.h>
#include <math.h>

int main() {
    int N;
    
    
    scanf("%d", &N);
    
    
    int largerDivisors[10000];
    int count = 0;
    
    for (int i = 1; i <= sqrt(N); i++) {
        if (N % i == 0) {
            printf("%d\n", i);
            
            if (i != N / i) {
                largerDivisors[count++] = N / i;
            }
        }
    }
    
    for (int i = count - 1; i >= 0; i--) {
        printf("%d\n", largerDivisors[i]);
    }

    return 0;
}
