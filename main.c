#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");   //Türkce karakterler kullanmak icin.

    int gun, ay;

    Gun:
    printf("Lütfen doðum gününüzü giriniz.\n");
    scanf("%d",&gun);
    if(gun<=0 || gun>31){   //gun degeri pozitif olmali. bir ayda 31'den fazla gun olmadigi icin 31'den buyuk olmamali.
        printf("Hatalý giriþ yaptýnýz.\n");
        goto Gun;   //hatalý giris yapýldýðýnda tekrardan deger girilmesini saglar.
    }

    Ay:
    printf("Lütfen kaçýncý ayda doðduðunuzu giriniz.\n");
    scanf("%d",&ay);
    if(ay<=0 || ay>12){ // ay degeri pozitif olmali. bir yil 12 aydan olustugu icin 12'den buyuk olmamali.
        printf("Hatalý giriþ yaptýnýz.\n");
        goto Ay;    //hatalý giris yapýldýðýnda tekrardan deger girilmesini saglar.
    }


    switch(ay){

        case 1:
            if (gun<=20)
                printf("Burcunuz Oðlak.");
            else
                printf("Burcunuz Kova.");
            break;

        case 2:
            if (gun<=19)
                printf("Burcunuz Kova.");
            else
                printf("Burcunuz Balýk.");
            break;

        case 3:
            if (gun<=20)
                printf("Burcunuz Balýk.");
            else
                printf("Burcunuz Koç.");
            break;

        case 4:
            if(gun<=20)
                printf("Burcunuz Koç.");
            else
                printf("Burcunuz Boða.");
            break;

        case 5:
            if (gun<=21)
                printf("Burcunuz Boða.");
            else
                printf("Burcunuz Ýkizler.");
            break;

        case 6:
            if(gun<=21)
                printf("Burcunuz Ýkizler.");
            else
                printf("Burcunuz Yengeç.");
            break;

        case 7:
            if(gun<=23)
                printf("Burcunuz Yengeç.");
            else
                printf("Burcunuz Aslan.");
            break;

        case 8:
            if(gun<=23)
                printf("Burcunuz Aslan.");
            else
                printf("Burcunuz Baþak.");
            break;

        case 9:
            if (gun<=23)
                printf("Burcunuz Baþak.");
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
                printf("Burcunuz Oðlak.");
            break;

        default:
            printf("Hatalý giriþ yaptýnýz.");
         break;

     }
    return 0;
}
