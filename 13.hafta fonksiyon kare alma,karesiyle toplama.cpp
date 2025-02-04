#include <stdio.h>

int karealma(int sayi)
{
	int kare;
	kare = sayi*sayi;
	return kare;
}

int toplam(int kare,int sayi)
{
	return kare+sayi;
}



int main()
{
	int a;
	
	scanf("%d",&a);
	printf("%d\n",karealma(a));
	
	printf("%d",toplam(karealma(a),a));
	
	
	
	return 0;
}
