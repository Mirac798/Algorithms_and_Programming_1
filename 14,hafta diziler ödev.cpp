#include <stdio.h>

int main()
{
	int input,i;
	int dizi[10]={1,2,3,4,5,6,7,8,9,10};
	printf("bir sayi giriniz:");
	scanf("%d",&input);
	
	
	
	for(i=0 ; i<10 ; i++)
	{
		if(input==dizi[i])
			continue;
		else
			printf("%d ",dizi[i]);			
	}	
	
	
	return 0;
}
