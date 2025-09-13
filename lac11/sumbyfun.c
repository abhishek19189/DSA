#include<stdio.h>
// int sum(){
//     int a=12;
//     int b =255;
//     printf("%d",a+b);
//     return 0;
// }
// int main(){
//     sum();
// }

int prime(){
    int num;
    printf("Enter a number to check if it is prime:");
    scanf("%d",&num);
    for (int i = 2; i <=num-1; i++)
    {
        if (num % i == 0)
        {
            printf("the num is not prime%d",num);
        }
    }
}
int main(){
    prime();
}