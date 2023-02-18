#include<stdio.h>

void main(){
    int inp, count = 1, tmp;
    printf("Enter an Integer:");
    scanf("%d",&inp);
    for(int i=0; i<inp; i++){
        tmp = count;
        count++;
        for(int j=0; j<inp;j++){
            if(tmp & (i+j)%2==0){
                printf("1");
                tmp--;
            }else if(tmp){
                printf("0");
                tmp--;
            }
        }printf("\n");
    }
}