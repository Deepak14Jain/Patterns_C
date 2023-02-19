#include<stdio.h>

void main(){
    printf("Enter an Integer:");
    int inp;
    scanf("%d",&inp);
    for(int i=65; i<=65+inp; i++){
        for(int j=65; j<=i; j++){
            printf("%c",j);
        }printf("\n");
    }
}