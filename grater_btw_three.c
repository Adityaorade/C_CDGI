#include <stdio.h>
int main() {
int a, b,c;
printf(" enter the 3 no you have to compare ");
scanf("%d %d %d",&a,&b,&c);


if ( a > b && a > c){
printf("%d is the largest ",a);

}
if ( b > c && b > a){
printf("%d is the largest ",b);
}
if ( c > a &&  c > b){
printf("%d is the largest",c);
}
//else{
//printf("value are not unique");}
return 0;
}