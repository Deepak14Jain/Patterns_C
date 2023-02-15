#include<stdio.h>

void main(){
    printf("Enter an Integer:");
    int inp;
    scanf("%d",&inp);
    for(int i=1; i<=inp; i++){
        for(int j=1; j<=i; j++){
            printf("*");
        }printf("\n");
    }
}