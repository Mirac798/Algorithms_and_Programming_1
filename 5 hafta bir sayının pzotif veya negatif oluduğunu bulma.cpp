//bir sayýnýn pozitif mi negatif mi olduðunu hesaplayan program

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int sayi1 ;
	
	printf("bir sayý giriniz:");
	scanf("%d",&sayi1);
	
	if (sayi1 > 0)
		printf("sayýnýz pozitif");
	
	else if (sayi1 == 0)
		printf("sayýnýz sýfýr");
		
	else
		printf("sayýnýz negatif");		
	
	
	
	
	return 0;
}
