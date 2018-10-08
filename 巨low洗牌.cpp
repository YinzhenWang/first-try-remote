#include <stdio.h>  
#include <stdlib.h>  
#include <time.h>  
  
void random(int a[], int n)  
{  
   int index, tmp, i;  
   srand(time(NULL));  
   for (i = 0; i <n; i++)  
    {  
       index = rand() % (n - i) + i;  
       if (index != i)  
         {  
            tmp = a[i];  
            a[i] = a[index];  
            a[index] = tmp;  
         }  
    }  
 }  
 
int main()  
{  
   int a[52] = {1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,6,6,6,6,7,7,7,7,8,8,8,8,9,9,9,9,10,10,10,11,11,11,11,12,12,12,12,13,13,13,13};  
   int i;  
   random(a, 52);  
   for (i = 0; i < 52; i++)  
   printf("%d ", a[i]);  
   printf("\n");  
   system("pause");  
   return 0;  
} 
