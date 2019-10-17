#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	void enqueue(int x);
int
 dequeue();
void display();
int main() 
{
	int ch,c=0,x,k;
	while(1)
	{
		printf("1.Queue In\n2.Queue Out\n3.Display\n4.Exit\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("Enter the number to be inserted:");
			scanf("%d",&x);
			enqueue(x);
			break;
			case 2: k=dequeue();
			if(k!=-909)
			printf("The value removed is:%d\n\n",k);
			break;
			case 3:display();
			break;
			case 4:printf("Thanks for using the program......Program terminated...");
			c=1;
			break;
			default:printf("Invalid Choice..");
		}
		if(c==1)
		
		break;
	}


	
	return 0;
}
