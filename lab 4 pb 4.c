#include <stdio.h>
int main() {
 int n;
 printf("Enter a number: ");
 scanf("%d", &n);

 for (int i = n; i >= 1; i--) {

  for (int s = 0; s < n - i; s++) {
   printf(" ");
 }
 int starcount = 2 * i - 1;
 for (int j = 0; j < starcount; j++) {
   printf("*");
 }
  printf("\n");
 }
 return 0;
}
