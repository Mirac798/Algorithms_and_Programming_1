//bir say�n�n pozitif mi negatif mi oldu�unu hesaplayan program

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int sayi1 ;
	
	printf("bir say� giriniz:");
	scanf("%d",&sayi1);
	
	if (sayi1 > 0)
		printf("say�n�z pozitif");
	
	else if (sayi1 == 0)
		printf("say�n�z s�f�r");
		
	else
		printf("say�n�z negatif");		
	
	
	
	
	return 0;
}
