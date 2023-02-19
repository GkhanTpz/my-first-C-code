#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.14 // sabit pi degerinin tanımlanması

void Formula(int islemler);

int main(){

    int islemler;

    do
    {
        printf("\nMerhaba\n\n");
        printf("Islemler:\n\n1: Kup`un Alani ve Hacmi\n2: Dik Silindir`in Alani ve Hacmi\n3: Kure`in Alani ve Hacmi\n4: Cikis\n\n");
        printf("Islemi seciniz:");
        scanf("%d",&islemler);

        while(islemler > 4 || islemler < 1){
            printf("Hatali secim yaptiniz.\nTekrar giris yapiniz:");
            scanf("%d",&islemler);
        }

        Formula(islemler); //Fonksiyonu Çağırma.
    }while(islemler!=4);

return 0;
}

void Formula(int islemler)
{
    int kenar, yukseklik;
    float hacim, yaricap, alan;

    switch(islemler)
    {

	case 1:
   	printf("Kup`un kenarini giriniz:");
        scanf("%d",&kenar);
        while(kenar <= 0){
	        printf("Hatali giris yaptiniz.\nKup`un kenarini tekrar giriniz:");
	        scanf("%d",&kenar);
	}
        alan = 6.0* pow(kenar,kenar); //  a = kenar   Kup`un Alani= 6*a^2	  Kup`un hacmi = a^3
        hacim = pow(kenar,kenar)*kenar;
        printf("Kupu`un alani: %.1f`dir.\n",alan);
        printf("Kup`un hacmi: %.1f `dir.\n",hacim);
        break;

   	case 2:
     	    printf("Dik Silindiri`in yaricapini giriniz:");
	    scanf("%f",&yaricap);
	    printf("Dik Silindiri`in yuksekligi giriniz:");
	    scanf("%d",&yukseklik);

	    while(yaricap <= 0){
	        printf("Hatali giris yaptiniz.\nYaricapi tekrar girinizz:");
	        scanf("%f",&yaricap);
	    }
            while(yukseklik <= 0){
	        printf("Hatali giris yaptiniz.\nYuksekligi tekrar giriniz:");
	        scanf("%d",&yukseklik);
            }
	    alan = 2*(PI*yaricap*yukseklik) + 2*(PI* pow(yaricap,yaricap)); // r: yaricap h: yukseklik PI: 3,14 Silindir`in Alani = 2*PI*r*h+2*PI*r^2
            printf("Dik Silindir`in alani: %.1f `dir.\n",alan);
            hacim = PI* pow(yaricap,yaricap)*yukseklik; // Silindir`in Hacmi = PI*r^2*h
            printf("Dik Silindir`in hacmi: %.1f `dir.\n",hacim);
       	    break;

        case 3:
            printf("Kure`nin yaricapini giriniz:");
	    scanf("%f",&yaricap);

            while(yaricap <= 0){
	        printf("Hatali giris yaptiniz.\nYaricapi tekrar giriniz:");
	        scanf("%f",&yaricap);
            }
            alan = 4*(PI*pow(yaricap,yaricap)); // r: yaricap PI: 3,14 Kure'nin Alani = 4*PI*r^2
            printf("Kure'nin alani: %.1f `dir.\n",alan);
            hacim = ((4*PI*pow(yaricap,yaricap)*yaricap)/3); // Kure'Nin  Hacmi = 4/3*(PI*r^3)
            printf("Kure'nin Hacmi: %.1f `dir.\n",hacim);
	    break;

	default:
	    printf("Cikis yapildi.\n");
    }
}
