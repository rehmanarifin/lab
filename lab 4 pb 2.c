#include<stdio.h>
int main(){
 int n;
 printf("Enter a number: ");
 scanf("%d", &n);

 for (int i = 1; i <= n; i++)
 {
  for (int s = 0; s < n - i; s++) {
   printf(" ");
 }
 for (int j = 0; j < i; j++){
  printf("*");
 }

 printf("\n");
 }
 return 0;
}
