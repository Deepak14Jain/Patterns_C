#include<stdio.h>

void main(){
    int inp, tmp;
    printf("Enter an Integer:");
    scanf("%d",&inp);
    for(int i=1; i<=inp; i++){
        tmp = i;
        while(tmp){
            printf("*");
            tmp--;
        }printf("\n");
    }for(int i=inp-1; i>0; i--){
        tmp = i;
        while(tmp){
            printf("*");
            tmp--;
        }printf("\n");
    }
}