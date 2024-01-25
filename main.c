#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// function untuk mengimplementasikan permainan
int game(char you, char computer)
{
	// Jika pengguna dan komputer
	// telah memilih hal yang sama
	if (you == computer)
		return -1;

	// Jika pilihan pengguna adalah batu dan
	// pilihan komputer adalah kertas
	if (you == 's' && computer == 'p')
		return 0;

	// Jika pilihan pengguna adalah kertas dan
	// pilihan komputer adalah batu
	else if (you == 'p' && computer == 's') return 1;

	// Jika pilihan pengguna adalah batu dan
	// pilihan komputer adalah gunting
	if (you == 's' && computer == 'z')
		return 1;

	// Jika pilihan pengguna adalah gunting dan
	// pilihan komputer adalah batu
	else if (you == 'z' && computer == 's')
		return 0;

	// Jika pilihan pengguna adalah kertas dan
	// pilihan komputer adalah gunting
	if (you == 'p' && computer == 'z')
		return 0;

	// Jika pilihan pengguna adalah gunting dan
	// pilihan komputer adalah kertas
	else if (you == 'z' && computer == 'p')
		return 1;
}

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