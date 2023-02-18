#include<stdio.h>

void main(){
    printf("Enter an odd Integer:");
    int inp, count = 1, num, tmp;
    scanf("%d",&inp);
    if((inp%2) == 0){
        printf("Only odd integer\nRetry!\n");
        return;
    }
    num = (inp-1)/2;
    for(int i=0; i<=num; i++){
        for(int j=0; j<inp; j++){
            if((i+j) == num){
                tmp = count;
                count += 2;
                while(tmp){
                    printf("*");
                    tmp--;
                }break;
            }else{
                printf(" ");
            }
        }printf("\n");
    }count = inp;
    for(int i=0; i<=num; i++){
        for(int j=0; j<inp; j++){
            if(j == i){
                tmp = count;
                count -= 2;
                while(tmp){
                    printf("*");
                    tmp--;
                }break;
            }else{
                printf(" ");
            }
        }printf("\n");
    }
}