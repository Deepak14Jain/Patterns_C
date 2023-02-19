#include<stdio.h>

void main(){
    int count = 1, inp, tmp;
    printf("Enter an Integer:");
    scanf("%d",&inp);
    for(int i=1; i<=inp; i++){
        tmp = i;
        while(tmp){
            if(count == inp+1)
                return;
            printf("%d ",count++);
            tmp--;
        }printf("\n");
    }printf("\n");
}