//kullan�c�dan  iki say� ve bir i�lem i�aret al�p i�lem yapan program

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL ,"");
	
	int sayi1,sayi2 ;
	char islem;
	
	printf("birinci say�y� giriniz:");
	scanf("%d",&sayi1);
	
	printf("ikinci say�y� giriniz:");
	scanf("%d",&sayi2);
	
	printf("yapaca��n�z i�lem:");
	scanf(" %c",&islem);
	
	if (islem == '+')
		printf("say�lar toplam�:%d",sayi1+sayi2);
	
	else if (islem == '-')
		printf("say�lar fark�:%d",sayi1-sayi2);
		
	else if (islem == '*')
		printf("say�lar �arp�m�:%d",sayi1*sayi2);
			
	else if (islem == '/')
		printf("say�lar oran�:%d",sayi1/sayi2);
		
	else if (islem == '%')
		printf("say�lar modu:%d",sayi1%sayi2);	
	
	else if (islem == 'p')
		printf("1.say�n�n 2incye g�re kuvveti:%d",pow(sayi1,sayi2));
	
	
	
	return 0 ;
}
