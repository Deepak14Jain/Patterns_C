#include<stdio.h>

void main(){
    printf("Enter an Integer:");
    int inp;
    scanf("%d",&inp);
    for(int i=65+inp-1; i>64; i--){
        for(int j=65; j<=i; j++){
            printf("%c", j);
        }printf("\n");
    }
}