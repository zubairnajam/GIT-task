#include <stdio.h>

int main()
{
	int n1,n2;
	char op;
	printf("Enter 2 numbers :");
	scanf("%d %d",&n1 ,&n2);
	printf("Enter operator (+ for addition , - for subtraction, * for multiplication and / for division)");
	scanf(" %c",&op);
	
	switch(op)
	{
		case '+':printf("%d",n1+n2);
				break;
				
		case '-':printf("%d",n1-n2);
				break;
				
		case '*':printf("%d",n1*n2);
				break;
				
		case '/':printf("%d",n1/n2);
				break;
	}
}
