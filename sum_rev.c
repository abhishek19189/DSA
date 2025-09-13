#include <stdio.h>
int main(){
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d",&n);
    int sum=0;
    for(int i=0; i<=n;i++){
        sum=sum+i;
    }
    printf("Sum of first  natural numbers is %d\n",sum);

    for(int i=n; i>=1; i--){
        printf("%d ",i);
    }
}