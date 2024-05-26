#include <stdio.h> //
#include <stdlib.h>
#include <Windows.h>
#include <conio.h>  // membuat teks antar muka

void textcolor(int color){
    static int __BACKGROUND;

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbiInfo;

    GetConsoleScreenBufferInfo(h, &csbiInfo);

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
                            color + (__BACKGROUND << 4));
}
void rumah(){
    system("cls");
    int a,b,c,d,e,f,g,h,i,j,x,y;

    printf("Tentukan tinggi dari cerobong, atap, dan dinding : ");
    scanf("%d", &x);
    printf("Masukkan komponen rumah : ");
    scanf(" %c", &y);

    for (a = 1; a <= x; a++){
        for (b = 1; b <= x; b++){
            printf(" ");
        }
        for (c = 1; c <= x; c++){
            textcolor(1);
            printf("%c", y);
        }
        printf("\n");
    }
    for (d = 1; d <= x; d++){
        for (e = d; e <= x - 1; e++){
            printf(" ");
        }
        for (e = 1; e <= d; e++){
            textcolor(6);
            printf("%c", y);
        }
        for (e = 1; e < d; e++){
            printf("%c", y);
        }
        for (f = 1; f <= x * 3; f++){
            textcolor(5);
            printf("%c", y);
        }
        printf("\n");
    }
    for (g = 1; g <= x; g++){
        for (h = 1; h <= x + (x - 1); h++){
            textcolor(7);
            printf("%c", y);
        }
        for (i = 1; i <= x * 3; i++){
            textcolor(2);
            printf("%c", y);
        }
        printf("\n");
    }
    textcolor(15);
    printf("\n");
    printf("Tekan entar untuk kembali");
    getch();
}
 void toko_FTI(){
    system("cls");
    int kode, harga, i=1, total_pembelian=0, uang, kembalian, jumlah;
    char kar='y';

    printf("------------------------------------------------\n");
    printf("|      Daftar dan Harga Barang Toko FTI        |\n");
    printf("-----------------------------------------------|\n");
    printf("| ID  |      Nama Barang       |  Harga Barang |\n");
    printf("|-----|------------------------|---------------|\n");
    printf("|1.   |Flash Disk Toshiba 4GB  | Rp 50000      |\n");
    printf("|2.   |Flash Disk Toshiba 8GB  | Rp 65000      |\n");
    printf("|3.   |Flash Disk Toshiba 16GB | Rp 90000      |\n");
    printf("|4.   |Flash Disk Toshiba 32GB | Rp 110000     |\n");
    printf("|5.   |Flash Disk Toshiba 4GB  | Rp 75000      |\n");
    printf("------------------------------------------------\n");

    while(kar=='y'){ // karna buat
    printf("Masukkan Kode Belanjaan Anda:",i); scanf("%d",&kode);
    fflush(stdin);//agar koding tidak menumpuk
    if(kode==1){
    harga= 50000;
    printf("Flash Disk Toshiba 4GB:%d\n",harga);
    }
    else if(kode==2){
    harga=65000;
    printf("Flash Disk Toshiba 8GB:%d\n",harga);
    }
    else if(kode==3){
    harga=90000;
    printf("Flash Disk Toshiba 16GB:%d\n",harga);
  }
  else if(kode==4){
    harga=110000;
    printf("Flash Disk Toshiba 32GB:%d\n",harga);
  }
  else if(kode==5){
    harga=75000;
    printf("Flash Disk Toshiba 4GB:%d\n",harga);
  }
  else{
        printf("Kode Salah\n");
}
    total_pembelian=total_pembelian+harga;
    printf("Beli lagi? [y/n]\n");
    scanf("%c",&kar);
    i++;
 }
    printf("Struck Belanja\n");
    printf("--------------\n");
    printf("Total yang harus dibayar=%d\n",total_pembelian);
    printf("Uang Anda : Rp. ");
                scanf("%d", &uang);
                if(uang>=total_pembelian)
                {
                    kembalian = uang - total_pembelian;
                    printf("kembalian = Rp. %d\n", kembalian);
                   }
                else
                {
                    printf("uang anda tidak cukup\n");
}
printf("\n");
    printf("Tekan enter untuk kembali");
    getche();
}

void bendera(){
    system("cls");
    int a, b, c, d, e, i;

	printf("Tuliskan ukuran bendera : "), scanf("%d", &i);

	for(d=1; d<=3; d++){
		for(a=1; a<=i; a++){
			for(e=1; e<=3; e++){
				for(b=1; b<=a; b++){
					printf("x ");
				}
				textcolor(4);
				for(c=i; c>=a; c--){
					printf("y ");
				}
				textcolor(7);
			}
			printf("\n");
		}
	}
	printf("\n");
    printf("Tekan enter untuk kembali");
    getche();
}

void author(){
    system("cls");  //membersihkan layar pprogram saat di jalankan sehingga program dapat menentukan saat untuk menghapus datavyang dijalankan tanpa harus menutup program tersebut
    int x; double y;
    char pembuat[]=    "\t\t\t\t\t   Pembuat :";

    printf("\n\n\n");
    for(x=0; pembuat[x]!=NULL; x++){
        printf("%c",pembuat[x]);     // menggunakan %c karena ingin memunculkan karakter
        for(y=0; y<=9999999; y++){  // batas awal 0 batas akhir 99999, semakin banyak batas akhir animasi semakin jalan lambat, dan sebaliknya
        }
   }
   char author1[]="\n\n\t\t Intan Marcelia Supono\t\t 672021147";
    printf("\n\n");
    for(x=0; author1[x]!=NULL; x++){
        printf("%c",author1[x]);
        for(y=0; y<=9999999; y++){
        }
   }
   char author2[]="\n\n\t\t Leonnyndra Putra Pratama\t 672021152";
    printf("\n\n\n");
    for(x=0; author2[x]!=NULL; x++){
        printf("%c",author2[x]);
        for(y=0; y<=9999999; y++){
        }
   }
   char author3[]="\n\n\t\t Windy Livia Azzahra\t\t 672021211";
    printf("\n\n\n");
    for(x=0; author3[x]!=NULL; x++){
        printf("%c",author3[x]);
        for(y=0; y<=9999999; y++){
        }
   }
    printf("\n\n\n\n");
    printf("Tekan entar untuk kembali");
    getche(); // memasukan karakter tanpa penekanan enter
}
void keluar(){
    system("cls");
    int a; double b;
    char salam[]="\t\t\t\t See You\n\n \t\t Bye-Bye \t\t\t\\(^_^)/\n\n\n\n\n\n\n\n\n\n\n\n\n)";
    printf("\n\n\n");
    for(a=0; salam[a]!=NULL; a++){
        printf("%c",salam[a]);
        for(b=0; b<=9999999; b++){
        }
   }
    exit(0);
}
void main(){
    int pilihan;
    do{
        system("cls");
        printf("TR DDP:\n");
        printf("1. Rumah Pola\n");
        printf("2. Toko FTI \n");
        printf("3. Bendera\n");
        printf("4. Author\n");
        printf("5. Exit\n");
        printf("Pilihan : ");
        scanf("%d", &pilihan);
        switch(pilihan){
            case 1: rumah();
            break;
            case 2: toko_FTI();
            break;
            case 3: bendera();
            break;
            case 4: author();
            break;
            case 5: keluar();
            break;
            default: printf("Pilihan Salah Enter Untuk Mengulang");
            getche();
        }
    }while(pilihan != 5);
}
