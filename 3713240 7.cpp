#include <stdio.h> 
#include <stdlib.h>
int main(void)
{
	int q,w=1,su=0;
	do
	{
		printf("----秀出1+2+....+n的總和----\n");
		printf("請輸入n值為：");
		scanf("%d",&q);  
	}
	while (q<=0); 
	do 
	su+=w++;  
	while (w <= q); 
	printf("1+2+...+%d=%d\n",q,su); 
	system("pause"); 
	return 0;   } 

