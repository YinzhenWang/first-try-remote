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
{  printf("*******21��˫�˶�ս*******\n"); 
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
   printf("���һ��һ������A\n");
   printf("��ѡ��AҪ��Ϊ1����11\n1��1\n2��11\n");
   scanf("%d",&b);   
	  if(b==1)
      printf("���һĿǰ����Ϊ%d\n",sum1);
      else if(b==2)
      {
	  sum1=sum1+10;
      printf("���һĿǰ����Ϊ%d\n",sum1);
      }    
   }

   else if(a[0]==10)
   printf("���һ��һ������J��Ŀǰ����Ϊ%d��\n",sum1);
   else if(a[0]==11)
   printf("���һ��һ������Q��Ŀǰ����Ϊ%d��\n",sum1);
   else if(a[0]==12)
   printf("���һ��һ������K��Ŀǰ����Ϊ%d��\n",sum1);
   else 
   printf("���һ��һ������%d,Ŀǰ����Ϊ%d��\n",sum1,sum1); 
   
   if (a[1]==0)
   {
     {
   printf("��Ҷ���һ������A\n");
   printf("��ѡ��AҪ��Ϊ1����11\n1��1\n2��11\n");
   scanf("%d",&b);   
	  if(b==1)
      printf("��Ҷ�Ŀǰ����Ϊ%d\n",sum2);
      else if(b==2)
      {
	  sum2=sum2+10;
      printf("��Ҷ�Ŀǰ����Ϊ%d\n",sum2);
      }    
   }
	  
   }
   else if(a[1]==10)
   printf("��Ҷ���һ������J��Ŀǰ����Ϊ%d��\n",sum2);
   else if(a[1]==11)
   printf("��Ҷ���һ������Q��Ŀǰ����Ϊ%d��\n",sum2);
   else if(a[1]==12)
   printf("��Ҷ���һ������K��Ŀǰ����Ϊ%d��\n",sum2);
   else 
   printf("��Ҷ���һ������%d,Ŀǰ����Ϊ%d��\n",sum2,sum2);
   
   
   
   printf("����y�������ƣ�����n���ٳ��ơ�\n");
   for(n=2;x==1,n<51;n=n+2)    
	{
			while (e==1)
        {
   	        
			scanf("%c",&ch1);
   	        if (ch1=='y')
   	        {sum1+=(1+a[n]);
   	        if (a[n]==0)
   {
   printf("���һ�鵽����A\n");
   printf("��ѡ��AҪ��Ϊ1����11\n1��1\n2��11\n");
   scanf("%d",&b);   
	  if(b==1)
      printf("���һĿǰ����Ϊ%d\n",sum1);
      else if(b==2)
      {
	  sum1=sum1+10;
      printf("���һĿǰ����Ϊ%d\n",sum1);
      }    
   }

   else if(a[n]==10)
   printf("���һ�鵽����J��Ŀǰ����Ϊ%d��\n",sum1);
   else if(a[n]==11)
   printf("���һ�鵽����Q��Ŀǰ����Ϊ%d��\n",sum1);
   else if(a[n]==12)
   printf("���һ�鵽����K��Ŀǰ����Ϊ%d��\n",sum1);
   else 
   printf("���һ�鵽����%d,Ŀǰ����Ϊ%d��\n",1+a[n],sum1); 
			   
   	        break;
		    }
		     else if (ch1=='n')
	        {printf("���һĿǰ�ĵ���Ϊ%d��\n",sum1);
            x=0;
			break;		
		    }
		    else
		    continue;
		     
        }
        
        if(sum1>21)
        {
		printf("�����ˡ�\n");
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
   printf("��Ҷ��鵽����A\n");
   printf("��ѡ��AҪ��Ϊ1����11\n1��1\n2��11\n");
   scanf("%d",&b);   
	  if(b==1)
      printf("��Ҷ�Ŀǰ����Ϊ%d\n",sum2);
      else if(b==2)
      {
	  sum2=sum2+10;
      printf("��Ҷ�Ŀǰ����Ϊ%d\n",sum2);
      }    
   }

   else if(a[n+1]==10)
   printf("��Ҷ��鵽����J��Ŀǰ����Ϊ%d��\n",sum2);
   else if(a[n+1]==11)
   printf("��Ҷ��鵽����Q��Ŀǰ����Ϊ%d��\n",sum2);
   else if(a[n+1]==12)
   printf("��Ҷ��鵽����K��Ŀǰ����Ϊ%d��\n",sum2);
   else 
			printf("��Ҷ��鵽�ĵ���Ϊ%d��Ŀǰ�ĵ���Ϊ%d\n",a[n+1]+1,sum2);
   	        break;
		    } 
		     else if (ch2=='n')
	        {printf("��Ҷ�Ŀǰ�ĵ���Ϊ%d��\n",sum2);
            x=0;
			break;		
		    }
		    else
		    continue;
		  
        }
        if(sum2>21)
        {
		printf("�����ˡ�\n");
		break;
	    }
        else if(ch1=='n'and ch2=='n')
        break;
    }
    
    if(sum1>21)
    printf("\n��Ҷ�ʤ��");
    else if(sum2>21 or sum1>sum2)
    printf("\n���һʤ��");
    else if(sum1<sum2)
    printf("\n��Ҷ�ʤ��");
    else if(sum1=sum2)
    printf("\nսƽ��"); 
	 
   

   
   
   
   return 0;  
} 
