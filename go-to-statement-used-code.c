#include<stdio.h>

void main()

{	int a;
	
printf("Enter a: ");
	
scanf("%d",&a);
	
if(a%2==0) 
{
	
		
goto even;
	
}
	
else 
{
		
goto odd;
	
}

even:

	
printf(" It is a even number");
	
return; 
odd:
	
printf("It is a odd number");

}