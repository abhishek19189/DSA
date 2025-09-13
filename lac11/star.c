#include<stdio.h>
int main(){
    for(int i=0;i<=4;i++){
        for (int j = 0; j<= 4; j++)// when you change the integer take extra care
        {if(i==j||j==(4-i))
            {
        printf("*");
    }
        else{
            printf(" ");
        }
            
        }
        printf("\n");
    }
}

// #include<stdio.h>
// int main(){
//     for(int i=0;i<=4;i++){
//         for(int j=0;j<=4;j++){
//             if(i==j||j==(4-i)){
//                 printf("*");
//             }else{
//                 printf(" ");
//             }

//         }printf("\n");
//     }
// }