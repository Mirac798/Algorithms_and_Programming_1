//kullanýcýdan  iki sayý ve bir iþlem iþaret alýp iþlem yapan program

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL ,"");
	
	int sayi1,sayi2 ;
	char islem;
	
	printf("birinci sayýyý giriniz:");
	scanf("%d",&sayi1);
	
	printf("ikinci sayýyý giriniz:");
	scanf("%d",&sayi2);
	
	printf("yapacaðýnýz iþlem:");
	scanf(" %c",&islem);
	
	if (islem == '+')
		printf("sayýlar toplamý:%d",sayi1+sayi2);
	
	else if (islem == '-')
		printf("sayýlar farký:%d",sayi1-sayi2);
		
	else if (islem == '*')
		printf("sayýlar çarpýmý:%d",sayi1*sayi2);
			
	else if (islem == '/')
		printf("sayýlar oraný:%d",sayi1/sayi2);
		
	else if (islem == '%')
		printf("sayýlar modu:%d",sayi1%sayi2);	
	
	else if (islem == 'p')
		printf("1.sayýnýn 2incye göre kuvveti:%d",pow(sayi1,sayi2));
	
	
	
	return 0 ;
}
