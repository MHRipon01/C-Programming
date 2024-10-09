#include <stdio.h>

// int main()
// {
//     // int a[] = {0,2};
//     // float b[10];
//     int arr[5] = {1, 2, 3};

//     printf("%d\n",arr[3]);
//     printf("checking");

//     return 0;
// }

int main(){
    int a[5];

    for(int i = 0; i<5 ; i++){
        scanf("%d" , &a[i]);
    }
// print 
for(int i = 0; i < 5; i++){
    printf("%d " , &a[i]);
}
return 0;
}




