#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;

    printf("bir sayi giriniz\n");
    scanf("%d", &sayi);

    if(sayi%2==0){
        printf("sayiniz cifttir\n");
    }
    else{
        printf("sayiniz tektir");
    }
    return 0;
}
