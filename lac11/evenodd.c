// #include<stdio.h>
// int even_odd(){
//     int num;
//     printf("Enter the num");
//     scanf("%d",&num);
//     if (num%2==0)
//     {
//         printf("The number %d is even\n", num);
//     }
//     else
//     {
//         printf("The number %d is odd\n", num);
//     }
    
// }

// int main(){
//     even_odd();
// }


#include <stdio.h>
int sum(){
    int a =5;
    int b = 10;
    int c = a + b;
    return c;
}

int main(){
    int result = sum();
    printf("The sum is: %d\n", result);
    return 0;
}