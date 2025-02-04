#include <stdio.h>

bool asal(int sayi)
{
	int i;
	bool deger;
	
	deger = true;
	for(i=2 ; i<sayi ; i+=1)
	{
		if (sayi % i ==0)
		{
			deger = false;
			break;
		}
		else
			continue;	
	}
	return deger;
}



int main()
{
	int gsayi;
	
	scanf("%d",&gsayi);
	if (asal(gsayi) == false)
		printf("asal degil");
	else
		printf("asal"); 	
	
	return 0;
}
