// #include <stdio.h>
// int main()
// {
//   int a, b, t , i;
//   printf("enter the number for the loop");
//   scanf("%d", &a);
//   printf("enter the t ");
//   scanf("%d", &t);

//   for (i = 1; i <= t; i++)
//   {
//     b = a * i;
//     printf(" %d*%d =%d\n", a, i, b);
//   }
//   return 0;
// }

#include <stdio.h>
int main()
{
  int a;
  printf("enter the number for the loop");
  scanf("%d", &a);
  

  for ( int i = 0 ; i<= a; i++){
    printf("%d ", i);
  }
  
  
  return 0;
}