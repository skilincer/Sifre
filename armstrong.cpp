#include <stdio.h>
// T�m basamaklar�ndaki rakamlar�n say� de�erlerinin k�pleri toplam�, kendisine e�it olan say�lara "Armstrong say�" denir. 
//Di�er bir deyi�le her bir basama��n o say�n�n basamak say�s� kadar �ss� al�narak toplanmas�d�r.
// E�er toplam bu say�y� veriyorsa o say� Armstrong Say�d�r.
//Baz� Armstrong say�lar�: 0, 1, 2, 3, 153, 370, 407, 1634, 8208
int pw(int, int);

int main()
{
   int s, sonuc = 0, gecici, bdeger, basamak = 0;

   printf("LUTFEN BIR SAYI GIRINIZn");
   scanf("%d", &s);

   gecici = s;
   while (gecici != 0) {
      basamak++;
      gecici = gecici/10;
   }

   gecici = s;

   while (gecici != 0) {
      bdeger = gecici%10;
      sonuc = sonuc + pw(bdeger, basamak);
      gecici = gecici/10;
   }

   if (s == sonuc)
      printf("%d ARMSTRONG SAYIDIR.n", s);
   else
      printf("%d ARMSTRONG SAYI DEGILDIR.n", s);

   return 0;
}

int pw(int s, int r) {
   int c, p = 1;

   for (c = 1; c <= r; c++)
      p = p*s;

   return p;
   
   
   }
