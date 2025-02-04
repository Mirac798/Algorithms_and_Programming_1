#include <stdio.h>
int main()
{
	float a,b,d,c,e,f;
	

	
	printf("birinci sayiyi giriniz:\n");
	
	scanf("%f",&a);
	
	printf("ikinci sayiyi giriniz:\n");
	
	scanf("%f",&b);
	
	c=a+b;
	printf("toplam:%.1f\n",c);
	
	d=a/b;
	printf("bolum:%.1f\n",d);
	
	e=a*b;
	printf("carpim:%.1f\n",e);
	
	
	f=(a+b)/2;
	
	printf("toplamlarinin ikiye bolumu:%.2f",f);
	
	
	
	
return 0;	
}
