// �� say�n�n en b�y���n� yazd�rma

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	int sayi1,sayi2,sayi3,enbuyuk,enbuyuk2,enbuyuk3 ;
	
	printf("say� 1:");
	scanf("%d",&sayi1);
	printf("say� 2:");
	scanf("%d",&sayi2);
	printf("say� 3:");
	scanf("%d",&sayi3);
	
	if (sayi1 >= sayi2 && sayi1 >= sayi3)
	{
		enbuyuk = sayi1;
		if (sayi2 >= sayi3)
		{
			enbuyuk2 = sayi2;
			enbuyuk3 = sayi3;
		}
		else
		{
			enbuyuk2 = sayi3;
			enbuyuk3 = sayi2;
		}
	}
	else if (sayi2 >= sayi1 && sayi2 >= sayi3)	
	{
		enbuyuk = sayi2;
		if (sayi1 >= sayi3)
		{
			enbuyuk2 = sayi1;
			enbuyuk3 = sayi3;
		}
		else
		{
			enbuyuk2 = sayi1;
			enbuyuk3 = sayi3;
		}	
	}
	else if (sayi3 >= sayi1 && sayi3 >= sayi2 )	
	{
		enbuyuk = sayi3;
		if (sayi1 >= sayi2)
		{
			enbuyuk2 = sayi1;
			enbuyuk3 = sayi2;
		}
		else
		{
			enbuyuk2 = sayi2;
			enbuyuk3 = sayi1;
		}	
	}
	printf("%d,%d,%d",enbuyuk,enbuyuk2,enbuyuk3);
	
	
	return 0;
}
