#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");   //T�rkce karakterler kullanmak icin.

    int gun, ay;

    Gun:
    printf("L�tfen do�um g�n�n�z� giriniz.\n");
    scanf("%d",&gun);
    if(gun<=0 || gun>31){   //gun degeri pozitif olmali. bir ayda 31'den fazla gun olmadigi icin 31'den buyuk olmamali.
        printf("Hatal� giri� yapt�n�z.\n");
        goto Gun;   //hatal� giris yap�ld���nda tekrardan deger girilmesini saglar.
    }

    Ay:
    printf("L�tfen ka��nc� ayda do�du�unuzu giriniz.\n");
    scanf("%d",&ay);
    if(ay<=0 || ay>12){ // ay degeri pozitif olmali. bir yil 12 aydan olustugu icin 12'den buyuk olmamali.
        printf("Hatal� giri� yapt�n�z.\n");
        goto Ay;    //hatal� giris yap�ld���nda tekrardan deger girilmesini saglar.
    }


    switch(ay){

        case 1:
            if (gun<=20)
                printf("Burcunuz O�lak.");
            else
                printf("Burcunuz Kova.");
            break;

        case 2:
            if (gun<=19)
                printf("Burcunuz Kova.");
            else
                printf("Burcunuz Bal�k.");
            break;

        case 3:
            if (gun<=20)
                printf("Burcunuz Bal�k.");
            else
                printf("Burcunuz Ko�.");
            break;

        case 4:
            if(gun<=20)
                printf("Burcunuz Ko�.");
            else
                printf("Burcunuz Bo�a.");
            break;

        case 5:
            if (gun<=21)
                printf("Burcunuz Bo�a.");
            else
                printf("Burcunuz �kizler.");
            break;

        case 6:
            if(gun<=21)
                printf("Burcunuz �kizler.");
            else
                printf("Burcunuz Yenge�.");
            break;

        case 7:
            if(gun<=23)
                printf("Burcunuz Yenge�.");
            else
                printf("Burcunuz Aslan.");
            break;

        case 8:
            if(gun<=23)
                printf("Burcunuz Aslan.");
            else
                printf("Burcunuz Ba�ak.");
            break;

        case 9:
            if (gun<=23)
                printf("Burcunuz Ba�ak.");
            else
                printf("Burcunuz Terazi.");
            break;

        case 10:
            if (gun<=22)
                printf("Burcunuz Terazi.");
            else
                printf("Burcunuz Akrep.");
            break;

        case 11:
            if(gun<=22)
                printf("Burcunuz Akrep.");
            else
                printf("Burcunuz Yay.");
            break;

        case 12:
            if(gun<=22)
                printf("Burcunuz Yay.");
            else
                printf("Burcunuz O�lak.");
            break;

        default:
            printf("Hatal� giri� yapt�n�z.");
         break;

     }
    return 0;
}
