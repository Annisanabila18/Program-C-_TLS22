#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop*/

int main (int argc, char *argv[]) {

    int total,harga,discount,uang;

    printf("hallo,selamat datang\n");
    printf("============================\n");
    printf("masukkan total pembelian=Rp");
    scanf("%id",& harga);

    if(harga<100000){
        discount=0.1*harga;
        total=harga-discount;
        printf("harga yang dibayar :%d",total);
    }

    else if ((harga>=100000)&&(harga<=500000)){
        discount=0.15*harga;
        total=harga-discount;
        printf("harga yang dibayar :%d",total);
    }

    else if(harga>500000){
        discount=0.25*harga;
        total=harga-discount;
        printf("harga yang dibayar :%d \n",total);
    }

    return 0;
}


