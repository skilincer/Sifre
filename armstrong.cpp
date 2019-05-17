#include <stdio.h>
// Tüm basamaklarýndaki rakamlarýn sayý deðerlerinin küpleri toplamý, kendisine eþit olan sayýlara "Armstrong sayý" denir. 
//Diðer bir deyiþle her bir basamaðýn o sayýnýn basamak sayýsý kadar üssü alýnarak toplanmasýdýr.
// Eðer toplam bu sayýyý veriyorsa o sayý Armstrong Sayýdýr.
//Bazý Armstrong sayýlarý: 0, 1, 2, 3, 153, 370, 407, 1634, 8208
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
