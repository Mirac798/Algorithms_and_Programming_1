//girilen iki say� aras�ndaki 8 e b�l�nen say�lar� bulan ve onlar� toplayan program

#include <stdio.h>

int main()
{
	int sayi1,sayi2,i,toplam = 0 ;
	printf("ilk sayi:");
	scanf("%d",&sayi1);
	
	printf("ikinci sayi:");	
	scanf("%d",&sayi2);
	
	
	for(i=sayi1;i<sayi2;i += 1)
	{
		if (i%8==0)
			toplam += i;
		
		
	}
	
	printf("%d",toplam);
	
	return 0;
}
