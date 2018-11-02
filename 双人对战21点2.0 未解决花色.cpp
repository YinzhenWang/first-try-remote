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
          
         }  
    }  
 }  
 



int main()  
{  printf("*******21点双人对战*******\n"); 
   int a[52] = {1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,6,6,6,6,7,7,7,7,8,8,8,8,9,9,9,9,10,10,10,11,11,11,11,12,12,12,12,0,0,0,0};  
   char ch1,ch2;
   int n,x,e,b,sum1,sum2,y1,y2;
   sum1=sum2=0;
   e=1;
   x=1;
   
   random(a, 52);  
   sum1=1+a[0]; 
   sum2=1+a[1];
   

   if (a[0]==0)
   {
   printf("玩家一第一张牌是A\n");
   printf("请选择A要记为1或是11\n1、1\n2、11\n");
   scanf("%d",&b);   
	  if(b==1)
      printf("玩家一目前点数为%d\n",sum1);
      else if(b==2)
      {
	  sum1=sum1+10;
      printf("玩家一目前点数为%d\n",sum1);
      }    
   }

   else if(a[0]==10)
   printf("玩家一第一张牌是J，目前点数为%d。\n",sum1);
   else if(a[0]==11)
   printf("玩家一第一张牌是Q，目前点数为%d。\n",sum1);
   else if(a[0]==12)
   printf("玩家一第一张牌是K，目前点数为%d。\n",sum1);
   else 
   printf("玩家一第一张牌是%d,目前点数为%d。\n",sum1,sum1); 
   
   if (a[1]==0)
   {
     {
   printf("玩家二第一张牌是A\n");
   printf("请选择A要记为1或是11\n1、1\n2、11\n");
   scanf("%d",&b);   
	  if(b==1)
      printf("玩家二目前点数为%d\n",sum2);
      else if(b==2)
      {
	  sum2=sum2+10;
      printf("玩家二目前点数为%d\n",sum2);
      }    
   }
	  
   }
   else if(a[1]==10)
   printf("玩家二第一张牌是J，目前点数为%d。\n",sum2);
   else if(a[1]==11)
   printf("玩家二第一张牌是Q，目前点数为%d。\n",sum2);
   else if(a[1]==12)
   printf("玩家二第一张牌是K，目前点数为%d。\n",sum2);
   else 
   printf("玩家二第一张牌是%d,目前点数为%d。\n",sum2,sum2);
   
   
   
   printf("输入y继续抽牌，输入n不再抽牌。\n");
   for(n=2;x==1,n<51;n=n+2)    
	{
			while (e==1)
        {
   	        
			scanf("%c",&ch1);
   	        if (ch1=='y')
   	        {sum1+=(1+a[n]);
   	        if (a[n]==0)
   {
   printf("玩家一抽到的是A\n");
   printf("请选择A要记为1或是11\n1、1\n2、11\n");
   scanf("%d",&b);   
	  if(b==1)
      printf("玩家一目前点数为%d\n",sum1);
      else if(b==2)
      {
	  sum1=sum1+10;
      printf("玩家一目前点数为%d\n",sum1);
      }    
   }

   else if(a[n]==10)
   printf("玩家一抽到的是J，目前点数为%d。\n",sum1);
   else if(a[n]==11)
   printf("玩家一抽到的是Q，目前点数为%d。\n",sum1);
   else if(a[n]==12)
   printf("玩家一抽到的是K，目前点数为%d。\n",sum1);
   else 
   printf("玩家一抽到的是%d,目前点数为%d。\n",1+a[n],sum1); 
			   
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
        {
		printf("爆牌了。\n");
		break;
	    }
		else
		while (e==1)
        {
   	        
			scanf("%c",&ch2);
   	        if (ch2=='y')
   	        {sum2+=(1+a[n+1]);
   	        if (a[n+1]==0)
   {
   printf("玩家二抽到的是A\n");
   printf("请选择A要记为1或是11\n1、1\n2、11\n");
   scanf("%d",&b);   
	  if(b==1)
      printf("玩家二目前点数为%d\n",sum2);
      else if(b==2)
      {
	  sum2=sum2+10;
      printf("玩家二目前点数为%d\n",sum2);
      }    
   }

   else if(a[n+1]==10)
   printf("玩家二抽到的是J，目前点数为%d。\n",sum2);
   else if(a[n+1]==11)
   printf("玩家二抽到的是Q，目前点数为%d。\n",sum2);
   else if(a[n+1]==12)
   printf("玩家二抽到的是K，目前点数为%d。\n",sum2);
   else 
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
        if(sum2>21)
        {
		printf("爆牌了。\n");
		break;
	    }
        else if(ch1=='n'and ch2=='n')
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
