#include <stdio.h>
int main()
{


	int sayi;
	
	printf("sayiyinin tek mi cift mi oldugunu ogrenmek icin, sayiyi girin:  ");
	scanf("%d",&sayi);
	
	if (sayi %2 == 0)
		printf("%d cift bir sayidir..",sayi);
	else 
		printf("%d tek bir sayidir..",sayi);
		
	return 0;
	
}
