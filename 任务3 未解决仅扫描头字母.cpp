#include <stdio.h>
#include <string.h>
int main(void)
{
	char ch;
    int a;
    
	a=1;
	printf(" ‰»Î"); 
	while (a==1)
	{
		
	    scanf ("%c",&ch);
		if (ch=='y')
		{printf("OK\n");
		 a=1;
		}
		else if(ch=='n')
		{printf("Not bad\n");
		 a=1;
		}
		else if(ch=='q')
		{printf("Bye\n");
		 a=0;
	    }
	    else
	    a=1; 
	}
	
	return 0;
 } 
