#include <stdio.h>

int main ()
{
	int buluncaksayi,sayi1,sayac;
	
	printf("sayi giriniz:");
	scanf("%d",&sayi1);
	
	buluncaksayi = sayi1%10;
	sayac = 0;
	
	while (sayi1 > 0)
	{
		if (buluncaksayi == sayi1%10 )
		{
			sayac += 1;
			
		}
		sayi1 = sayi1/10;
	
	}
	
	
	printf("%d",sayac);
	
	
	
	
	return 0;
}
