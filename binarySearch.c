#include <stdio.h>
int main()
{
   int c, first, last, middle, n, search, array[100];
   printf("Enter number of elements: ");
   scanf("%d",&n); //7
   printf("\nEnter %d integers: ", n);

   for (c = 0; c < n; c++)
      scanf("%d",&array[c]);

   printf("\nEnter value to find: ");
   scanf("%d", &search);

   first = 0;
   last = n - 1;
   middle = (first+last)/2;
   printf("\nfirst: %d, middle: %d, last: %d \n",first,middle, last);

   while (first <= last && array[middle] != search) {
      if (search<array[middle])
         last = middle - 1;
      else
         first = middle + 1;

    middle = (first + last)/2;
    printf("first: %d, middle: %d, last: %d \n",first,middle, last);
   }
   if(array[middle]==search)
       printf("Item found in location: %d",middle);
   else
      printf("Item not found");

   return 0;
}
