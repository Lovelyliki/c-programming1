#include<stdio.h>
int main()
{
	int x,n;
	int ch;
	printf("1.addition\n2.subtraction\n3.multiplication\n4.division\n5.power\n");
	printf("enter the values of x&n:");
	scanf("%d%d",&x,&n);
	printf("enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("sum of %d and %d is : %d",x,n,x+n);
			break;
			case 2:
				printf("difference of %d and %d is : %d",x,n,x-n);
				break;
				case 3:
					printf("multiplicatin of %d and %d is : %d",x,n,x*n);
					break;
						case 4:
						printf("division of %d and %d is : %d",x,n,x/n);
						break;
						case 5:
							printf("power of %d and %d is :%d",x,n,pow(x,n));
							break;
						default:
							printf("enter your correct choice:");
							break;
	}
	 return 0;
	
}
