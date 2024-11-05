#include<stdio.h>

int main() {

   int n, r, sm = 9;

   printf("Enter a number:");
   scanf("%d", &n);

   while (n > 0) {
       r = n % 10;
       if (sm > r) {
           sm = r;
       }
       n = n / 10;
   }
   printf("Smallest digit:%d", sm);

   return 0;
}