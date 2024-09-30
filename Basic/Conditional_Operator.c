#include <stdio.h>
#include <stdbool.h>

// int main()
// {
//     //if

//     int a = 5;

//     printf("Before if\n");

//     if (a == 7)
//     {
//         printf("inside if \n");
//     }
//     printf("After if \n");
//     return 0;
// }

// int main()
// {
//     // if else

//     int price = 20;

//     if (price <= 60)
//     {
//         printf("Buy 4 eggs\n");
//         printf("Take %d Taka back", 60 - price);
//     }
//     else
//     {
//         printf("Buy 2 eggs");
//     }

//     return 0;
// }

// SWITCH CASE
int main()
{
    int day = 1, hour = 2;
    switch (day)
    {
    case 1:
        printf("saturday \n");
        
        switch (hour)
        {
        case 1:
            printf("1 hour\n");
            break;
        case 2:
            printf("2 hour\n");
            break;
        }
        break;
    case 2:
        printf("sunday \n");
        break;
    case 3:
        printf("monday \n");
        break;
    case 4:
        printf("Tuesday \n");
        break;
    case 5:
        printf("wednesday \n");
        break;
    case 6:
        printf("Thursday\n");
        break;
    case 7:
        printf("Friday\n");
        break;
    }
    printf("Out of switch case\n");
}
