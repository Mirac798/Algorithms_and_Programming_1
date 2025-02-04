#include <stdio.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL,"");
	
	int sayi;
	
	
	printf("bir sayý giriniz:");
	scanf("%d",&sayi);
	
	if ((sayi>50 && sayi%2==0) || (sayi<50 && sayi%2==1))
		printf("sayý elliden büyük ve çift bir sayý veya sayý elliden küçük ve tek bir sayý");
		
		
	
	
	
	return 0;
}
