#include<stdio.h>


struct distance{
	int feet;
	float inch;	
} d1,d2, result;

main()
{
	printf("enter first distance:-\n");
	printf("enter feet");
	scanf("%d",&d1.feet);
	printf("enter inch");
	scanf("%d",&d2.inch);
	
	
	printf("enter 2nd distance:-\n");
	printf("enter feet");
	scanf("%d",&d1.feet);
	printf("enter inch");
	scanf("%d",&d2.inch);
	
	result.feet =d1.feet + d2.feet;
	result.inch =d1.inch + d2.inch;
	
	while(result.inch >=12.0)
	{
		result.inch=result.inch -12.0;
		++result.feet;
	}
	printf("\nsum of distances =%d'.%.f",result.feet, result.inch);
}
	


