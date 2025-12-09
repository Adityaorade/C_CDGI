#include<stdio.h>
int main(){
    int n , count=0 , i ;
    printf(" enter the no for check ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        printf("this an prine no ");
    }
    else{
        printf("not  an prime no ");

    }
return 0;

}