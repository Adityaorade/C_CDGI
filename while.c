#include<stdio.h>
int main(){
    int i =1, n;
    printf("enter the number ");
    scanf(" %d",&n);

    while(i<=n){
        printf("%d",i);
        i++;
    }
    return 0 ;
}