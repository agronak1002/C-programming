#include<stdio.h>
int main(){
    for(int r=1; r<=5; r++){
        for(int c1=r; c1<=4; c1++){
            printf("\t");
        }
        for(int c2=1; c2<=r*2-1; c2++){
            printf("%d\t", c2%2);
        }
        printf("\n");
    }
}