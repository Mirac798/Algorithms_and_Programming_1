#include <stdio.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL,"");
	
	int sayi;
	
	
	printf("bir say� giriniz:");
	scanf("%d",&sayi);
	
	if ((sayi>50 && sayi%2==0) || (sayi<50 && sayi%2==1))
		printf("say� elliden b�y�k ve �ift bir say� veya say� elliden k���k ve tek bir say�");
		
		
	
	
	
	return 0;
}
