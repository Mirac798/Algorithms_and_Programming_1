//vize ve final notlar�n� alarak not ortalamas�n� ve ge�ip ge�medi�ini hesaplayan program

#include <stdio.h>

int main()

{
	int vizenotu,finalnotu,gecmenotu ;
	
	printf("vize notu:\n");
	scanf("%d",&vizenotu);
	
	printf("finalnotu:\n");
	scanf("%d",&finalnotu);
	
	gecmenotu = (vizenotu*0.4)+(finalnotu*0.6);
	
	if (gecmenotu >= 50)
		printf("tebrikler gectiniz gecmenotunuz:%d",gecmenotu);
		
	else
		printf("daha cok calis gecmenotunuz:%d",gecmenotu);
	
		
	
	return 0;
}
