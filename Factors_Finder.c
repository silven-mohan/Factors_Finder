/** Factors Finder **/

#include<stdlib.h>

main()
{
	int n, i;
	system("cls");
	printf("Enter any number:");
	scanf("%d", &n);
	system("cls");
	printf("\n\tFactors of %d are =  {", n);
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			printf("%d, ", i);
		}
	}
	printf("%d}", n);
}
