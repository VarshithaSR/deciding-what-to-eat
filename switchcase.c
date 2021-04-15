#include<stdio.h>
int main()
{
	int n;
	printf("enter a number from 1 to 5:");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		   printf("Food item:PIZZA\nPrice:Rs 239");
		   break;
		case 2:
		   printf("Food item:FRENCH FRIES\nPrice:Rs 199");
		   break;
		case 3:
			printf("Food item:BURGER\nPrice:Rs 129");
		    break;
		case 4:
		    printf("Food item:SANDWITCH\nPrice:Rs 149");
		    break;
		case 5:
		    printf("Food item:CHICKEN WINGS\nPrice:Rs 209");
		    break;	
    }
    return 0;
}
