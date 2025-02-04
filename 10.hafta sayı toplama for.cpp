//kullanýcadan alýnnan bir sayýya kadar olan tüm sayýlarýn toplamýný bulan program

#include <stdio.h>
#include <locale.h>

int main()
{
	
setlocale(LC_ALL,"");
	
int toplam,sayi,x ;
	
	printf("bir sayý giriniz:");
	scanf("%d",&sayi);
	
	toplam = 0;
	
	for (x=0;x<=sayi;x=x+1)
	{
		toplam = toplam + x ;
	}
	
	printf("%d",toplam);
	
		
	return 0;
}
