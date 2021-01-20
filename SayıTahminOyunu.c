#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{   
    int sayi, tahmin, tahmin_sayisi=1;
    srand(time(0));
    sayi = rand() % 100 + 1;

    
    do
    {
        printf("1 ILE 100 ARASI BIR SAYI SEC \n");
        scanf("%d", &tahmin);

        if(tahmin>sayi){
            printf("DAHA KUCUK BIR SAYI SEC \n");
        }
        else if (tahmin<sayi)
        {
            printf("DAHA BUYUK BIR SAYI SEC \n");
        }
        else{
            printf("BILDIN!! DOGRU SAYIYI %d TAHMINDE BULDUN\n", tahmin_sayisi);
        }
        tahmin_sayisi++;
    } while(tahmin!=sayi);
    
    return 0;
}
