// Selection sort
#include <stdio.h>
 
int main()
{
   int array[100], n, c, d, position, swap;
 
   printf("Enter number of elements\n");
   scanf("%d", &n);
 
   printf("Enter %d integers\n", n);
   for ( c = 0 ; c < n ; c++ )
      scanf("%d", &array[c]);
   // print first line
   printf("Initial    : ", n);
   int i=0;
    for ( i = 0 ; i < n ; i++ )
      printf("%d ", array[i]);
 
   for ( c = 0 ; c < ( n - 1 ) ; c++ )
   {
      position = c;
 
      for ( d = c + 1 ; d < n ; d++ )
      {
         if ( array[position] > array[d] )
            position = d; // find minimum value position
      }
      if ( position != c )  
      {
         //swap minimum value with pivot value 
         swap = array[c];
         array[c] = array[position];
         array[position] = swap;
      }
    printf("\n k=%d, loc=%d: ",(c+1),(position+1));
    for ( i = 0 ; i < n ; i++ )
      printf("%d ", array[i]);
      
   }
 
   printf("\n\nSorted list in ascending order:\n");
 
   for ( c = 0 ; c < n ; c++ )
      printf("%d ", array[c]);
 
   return 0;
}