#include <stdio.h>
#include <math.h>

int main()
{
	int yenisayi,sayi1,sayac,sayi2;
	
	printf("sayi giriniz:");
	scanf("%d",&sayi1);
	
	yenisayi = 0;
	sayac = 0;
	
	while (sayi1 > 0)
	{
		sayi2 = sayi1%10;
		sayi1 = sayi1/10;			
		yenisayi = yenisayi + sayi2*(pow(10,sayac));
		sayac += 1;
	}	
	
	printf("%d",yenisayi);
	
	return 0;
}
