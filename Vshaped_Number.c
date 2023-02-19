#include<stdio.h>

void main(){
    int inp;
    printf("Enter an Integer:");
    scanf("%d",&inp);
    int arr[inp][inp+inp];
    for(int i=0; i<inp; i++){
        for(int j=0; j<inp+inp; j++)
            arr[i][j] = 0;
    }for(int i=0; i<inp;i++){
        for(int j=0; j<inp+inp; j++){
            if(j<=i)
                arr[i][j] = (char)(j+1);
                arr[i][inp+inp-1-j] = arr[i][j];
        }
    }for(int i=0; i<inp; i++){
        for(int j=0; j<(inp+inp); j++)
            if(arr[i][j] == 0)
                printf(" ");
            else
                printf("%d",arr[i][j]);
        printf("\n");
    }
}