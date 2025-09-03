#include<stdio.h>
int main(){
    int num = 282;
    int org =num;
    int res = 0;
    while (num!=0)
    {
        int lastd = num%10;
        res = res*10+lastd;
        num = num/10;
        /* code */
        printf("%d\n",res);
    }if (org=res)
    {
        printf("the number is penidrom");
        /* code */
    }else{
        printf("not penidrom");
    }
    
    
    
}