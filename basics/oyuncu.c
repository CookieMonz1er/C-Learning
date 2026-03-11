#include <stdio.h>

typedef struct
{
    char isim[50];
    int skor;
} Oyuncu;

Oyuncu max_bul(Oyuncu *dizi, int boyut)
{
    int max_index = 0;
    for (int i = 1; i < boyut; i++)
    {
        if (dizi[i].skor > dizi[max_index].skor)
        {
            max_index = i;
        }
    }
    return dizi[max_index];
}
int main(void)
{
    Oyuncu oyuncular[] = {
        {"Ali", 100},
        {"Veli", 250},
        {"Ayşe", 180}};

    Oyuncu sonuc = max_bul(oyuncular, 3);
    printf("%s\n", sonuc.isim);
    printf("%d\n", sonuc.skor);

    return 0;
}