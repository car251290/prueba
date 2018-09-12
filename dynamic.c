
#include <stdlib.h>
#include <stdlib.h>
/* syntax: prt = malloc(byte-size); */

int main()
{
    int num;
    int i;
    int sum;
    int *ptr;
    sum = 0; 
    num = 10;
    //malloc -> (void *)
   ptr = (int *)malloc(num * sizeof(int));
   ptr =(int *)calloc(num,sizeof(int)); //0,........0
   int *new_ptr = ptr;
   new_ptr = realloc (new_ptr,20);
   free(ptr);
   realloc(ptr, 20);
    // reallocate pt(10) to (20) bytes in 
   //java person ptr = new person string 
   if(ptr == NULL)
   {
       printf("error memory program");
       exit(0);
   }
   for(i=0; i < num; i++)
   {
       *(ptr + i) = i;
      // ptr++;
   }
   printf("ptr[0],ptr[5]=%d \n",*ptr,*(ptr + 5));
   free(ptr);
   return 0;





    

}
