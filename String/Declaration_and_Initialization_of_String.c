#include <stdio.h>

int main()
{
    // char      str     [6];
    // d-type    name     size

    // 1 character takes 1 byte

    // declaration
    // char str[10] = "abcd";

    // normal printing
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("%c", str[i]);
    // }
    // printf("\n");

    // another way of printing
    // printf("%s", str);

    // printf("\n");
    // taking input
    // char string[10];

    // scanf("%s", string);
    // printf("%s", string);
    // printf("\n");



    // taking input more than 1 word
    // char stringWithSpace[18];
    // scanf("%[^\n]s", stringWithSpace);

    // printf("%s", stringWithSpace);
    // printf("klsdffk");

    char str[29];

    fgets(str,sizeof(str) , stdin); 

    // printf("%s",str);
    fputs(str , stdout);


    return 0;
}