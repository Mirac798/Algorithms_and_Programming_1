//5 sayýnýn ortalamasýný yazdýran program

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	float sayi1,sayi2,sayi3,sayi4,sayi5 ,ortalama ;
	
	printf("sayý 1:");
	scanf("%f",&sayi1);
	printf("sayý 2:");
	scanf("%f",&sayi2);
	printf("sayý 3:");
	scanf("%f",&sayi3);
	printf("sayý 4:");
	scanf("%f",&sayi4);
	printf("sayý 5:");
	scanf("%f",&sayi5);
	
	ortalama = (sayi1+sayi2+sayi3+sayi4+sayi5)/5;
	
	printf("%.2f",ortalama);
	
return 0 ;
}
	
