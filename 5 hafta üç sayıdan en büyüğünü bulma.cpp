//girilen üç tam sayýdan en büyüðünü veren program 

#include<stdio.h>

int main()
{
	int sayi1,sayi2,sayi3;
	
	printf("birinci tam sayiyi giriniz:\n");
	scanf("%d",&sayi1);
	
	printf("ikinci tam sayiyi giriniz:\n");
	scanf("%d",&sayi2);
	
	printf("ucuncu tam sayiyi giriniz:\n");
	scanf("%d",&sayi3);
	
	if (sayi1>sayi2)
		{
		if (sayi1>sayi3)
			printf("en buyuk sayi %d",sayi1);
		else
			printf("en buyuk sayi %d",sayi3);
		}
	else
		{
		if (sayi2>sayi3)
			printf("en buyuk sayi %d",sayi2);
		else 
			printf("en buyuk sayi %d",sayi3);	
		}
	
	
	return 0;
}
