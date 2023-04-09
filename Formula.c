#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.14 // sabit pi degerinin tanımlanması

void Formula(int processes); //fonksiyon belirtme

int main()
{

    int processes;

    do
    {
        printf("\nMerhaba\n\n");
        printf("Islemler:\n\n1: Kup`un Alani ve Hacmi\n2: Dik Silindir`in Alani ve Hacmi\n3: Kure`in Alani ve Hacmi\n4: Cikis\n\n");
        printf("Islemi seciniz:");
        scanf("%d",&processes);

        while(processes > 4 || processes < 1)
        {
            printf("Hatali secim yaptiniz.\nTekrar giris yapiniz:");
            scanf("%d",&processes);
        }

        Formula(processes); //Fonksiyonu Çağırma.
    }
    while(processes != 4);

    return 0;
}

void Formula(int processes) //Formül Fonksiyonu
{
    int edge, height;
    float volume, r, area;

    switch(processes)
    {

    case 1:
        printf("Kup`un kenarini giriniz:");
        scanf("%d",&edge);
        while(edge <= 0)
        {
            printf("Hatali giris yaptiniz.\nKup`un kenarini tekrar giriniz:");
            scanf("%d",&edge);
        }
        area= 6.0* pow(edge,edge); //  a = kenar   Kup`un Alani= 6*a^2	  Kup`un hacmi = a^3
        volume = pow(edge,edge)*edge;
        printf("Kupu`un alani: %.1f`dir.\n",area);
        printf("Kup`un hacmi: %.1f `dir.\n",volume);
        break;

    case 2:
        printf("Dik Silindiri`in yaricapini giriniz:");
        scanf("%f",&r);
        printf("Dik Silindiri`in yuksekligi giriniz:");
        scanf("%d",&height);

        while(r <= 0)
        {
            printf("Hatali giris yaptiniz.\nYaricapi tekrar girinizz:");
            scanf("%f",&r);
        }
        while(height <= 0)
        {
            printf("Hatali giris yaptiniz.\nYuksekligi tekrar giriniz:");
            scanf("%d",&height);
        }
        area = 2*(PI*r*height) + 2*(PI* pow(r,r)); // r: yaricap h: yukseklik PI: 3,14 Silindir`in Alani = 2*PI*r*h+2*PI*r^2
        printf("Dik Silindir`in alani: %.1f `dir.\n",area);
        volume = PI* pow(r,r)*height; // Silindir`in Hacmi = PI*r^2*h
        printf("Dik Silindir`in hacmi: %.1f `dir.\n",volume);
        break;

    case 3:
        printf("Kure`nin yaricapini giriniz:");
        scanf("%f",&r);

        while(r <= 0)
        {
            printf("Hatali giris yaptiniz.\nYaricapi tekrar giriniz:");
            scanf("%f",&r);
        }
        area = 4*(PI*pow(r,r)); // r: yaricap PI: 3,14 Kure'nin Alani = 4*PI*r^2
        printf("Kure'nin alani: %.1f `dir.\n",area);
        volume = ((4*PI*pow(r,r)*r)/3); // Kure'Nin  Hacmi = 4/3*(PI*r^3)
        printf("Kure'nin Hacmi: %.1f `dir.\n",volume);
        break;

    default:
        printf("Cikis yapildi.\n");
    }
}
