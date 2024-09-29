
// #include<stdio.h>

// int main(){
//     printf("Hello World");
//     printf("Hello C Programming!! \n");
//     return 0;
// };

// Taking Input
// #include <stdio.h>
// int main()
// {
//     int a, b, c;
//     scanf("%d %d %d ", &a, &b, &c);
//     char ch;

//     scanf("%c", &ch);

//     printf("a =%d b=%d  c=%d ch=%c", a, b, c, ch);
//     return 0;
// }

/*
Format Specifier

short int %hd
int %d
long int %ld
long long %lld
char %c
float %f
double %lf
long double %Lf

unsigned int %u
unsigned short %hu
unsigned long int %lu
unsigned long long int %llu
*/

#include <stdio.h>
int main()
{
    float a;
    scanf("%f", &a);
    printf("%.10f", a);
    return 0;
}
