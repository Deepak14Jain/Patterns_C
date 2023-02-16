#include<stdio.h>

void main(){
    printf("Enter an Integer:");
    int inp, count = 1, num, tmp;
    scanf("%d",&inp);
    num = (inp-1)/2;
    for(int i=0; i<inp; i++){
        for(int j=0; j<inp; j++){
            if((i+j) == num){
                tmp = count;
                count += 2;
                while(tmp){
                    printf("*");
                    tmp--;
                }break;
            }else{
                printf("\t");
            }
        }printf("\n");
    }
}