//kullan�cadan al�nnan bir say�ya kadar olan t�m say�lar�n toplam�n� bulan program

#include <stdio.h>
#include <locale.h>

int main()
{
	
setlocale(LC_ALL,"");
	
int toplam,sayi,x ;
	
	printf("bir say� giriniz:");
	scanf("%d",&sayi);
	
	toplam = 0;
	
	for (x=0;x<=sayi;x=x+1)
	{
		toplam = toplam + x ;
	}
	
	printf("%d",toplam);
	
		
	return 0;
}
