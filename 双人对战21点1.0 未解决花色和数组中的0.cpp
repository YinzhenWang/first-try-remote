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
   int a[52] = {1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,6,6,6,6,7,7,7,7,8,8,8,8,9,9,9,9,10,10,10,11,11,11,11,12,12,12,12,0,0,0,0};  
   char ch1,ch2;
   int n,x,e,sum1,sum2;
   sum1=sum2=0;
   e=1;
   x=1;
   random(a, 52);  
   for(n=1;x==1,n<51;n=n+2)    
	{
			while (e==1)
        {
   	        scanf("%c",&ch1);
   	        if (ch1=='y')
   	        {sum1+=(1+a[n]);
   	        printf("玩家一抽到的点数为%d,目前的点数为%d。\n",a[n]+1,sum1);
   	        break;
		    }
		     else if (ch1=='n')
	        {printf("玩家一目前的点数为%d。\n",sum1);
            x=0;
			break;		
		    }
		    else
		    continue;
		     
        }
        
        if(sum1>21)
        break;
		else
		while (e==1)
        {
   	        scanf("%c",&ch2);
   	        if (ch2=='y')
   	        {sum2+=(1+a[n+1]);
   	        printf("玩家二抽到的点数为%d，目前的点数为%d\n",a[n+1]+1,sum2);
   	        break;
		    }
		     else if (ch2=='n')
	        {printf("玩家二目前的点数为%d。\n",sum2);
            x=0;
			break;		
		    }
		    else
		    continue;
		  
        }
        if(sum2>21 or ch1=='n'and ch1=='n')
        break;
    }
    
    if(sum1>21)
    printf("\n玩家二胜！");
    else if(sum2>21 or sum1>sum2)
    printf("\n玩家一胜！");
    else if(sum1<sum2)
    printf("\n玩家二胜！");
    else if(sum1=sum2)
    printf("\n战平！"); 
	 
   
   
   
   
   
   
   
   
   
   
   return 0;  
} 
