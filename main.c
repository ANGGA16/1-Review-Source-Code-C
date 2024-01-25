#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    	// Menyimpan nomor acak
	int n;

	char kamu, komputer, hasil;

   	// Memilih nomor acak
    	// setiap saat
	srand(time(NULL));

	// Kurangi angka acaknya
	// dari 100, dibagi 100
	n = rand() % 100;

    	// Menggunakan probabilitas sederhana 100 adalah
    	// secara kasar terbagi di antara batu,
    	// kertas, dan gunting
	if (n < 33)
        // s melambangkan Batu
		komputer = 's';
	else if (n > 33 && n < 66)
        // p menunjukkan Kertas
		komputer = 'p';
	else
        // z menunjukkan Gunting
		komputer = 'z';

	printf("Masukkan s untuk BATU, p untuk KERTAS dan z untuk GUNTING\n");

    	// masukan dari pengguna
	scanf("%c", &kamu);

	// Memanggil function untuk memainkan game
	hasil = game(kamu, komputer);

	if (hasil == -1) {
		printf("Permainan Draw!\n");
	}
	else if (hasil == 1) {
		printf("Wow! Anda telah memenangkan permainan!\n");
	}
	else {
		printf("Oh! Anda telah kalah dalam permainan!\n");
	}
		printf("Anda memilih : %c dan Komputer pilih : %c\n\n",kamu, komputer);

    return 0;
}
