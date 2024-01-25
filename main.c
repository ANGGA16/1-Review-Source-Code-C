#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// === Proses Data dari kamu, komputer ===
// function untuk mengimplementasikan permainan
int game(char kamu, char komputer)
{
	// Jika pengguna dan komputer
	// telah memilih hal yang sama
	if (kamu == komputer){
        return -1;
	}

	// Jika pilihan pengguna adalah batu dan
	// pilihan komputer adalah kertas
	if (kamu == 's' && komputer == 'p'){
        return 0;

    // Jika pilihan pengguna adalah kertas dan
	// pilihan komputer adalah batu
	} else if (kamu == 'p' && komputer == 's'){
        return 1;
	}

	// Jika pilihan pengguna adalah batu dan
	// pilihan komputer adalah gunting
	if (kamu == 's' && komputer == 'z'){
        return 1;

    // Jika pilihan pengguna adalah gunting dan
	// pilihan komputer adalah batu
	} else if (kamu == 'z' && komputer == 's'){
        return 0;
	}

	// Jika pilihan pengguna adalah kertas dan
	// pilihan komputer adalah gunting
	if (kamu == 'p' && komputer == 'z'){
        return 0;

    // Jika pilihan pengguna adalah gunting dan
	// pilihan komputer adalah kertas
	} else if (kamu == 'z' && komputer == 'p'){
        return 1;
	}

}
// === Proses Data dari kamu, komputer ===

int main()
{
    	// Menyimpan nomor acak
	int n;

	char kamu, komputer, hasil;

	// === Generate Nomor Acak Komputer ===
   	// Memilih nomor acak
    	// setiap saat
	srand(time(NULL));

	// Kurangi angka acaknya
	// dari 100, dibagi 100
	n = rand() % 100;

    	// Menggunakan probabilitas sederhana 100 adalah
    	// secara kasar terbagi di antara batu,
    	// kertas, dan gunting
	if (n < 33){
        // s melambangkan Batu
		komputer = 's';
	} else if (n > 33 && n < 66){
        // p menunjukkan Kertas
		komputer = 'p';
	} else {
        // z menunjukkan Gunting
		komputer = 'z';
	}
    // === Generate Nomor Acak Komputer ===

    // === From Input ===
	printf("Masukkan s untuk BATU, p untuk KERTAS dan z untuk GUNTING\n");

    	// masukan dari pengguna
	scanf("%c", &kamu);
	// === From Input ===

    // === Function ===
	// Memanggil function untuk memainkan game
	hasil = game(kamu, komputer);
	// === Function ===

	// === Output ===
	if (hasil == -1) {
		printf("Permainan Draw!\n");
	} else if (hasil == 1) {
		printf("Wow! Anda telah memenangkan permainan!\n");
	} else {
		printf("Hah! Anda telah kalah dalam permainan!\n");
	}
		printf("Anda memilih : %c dan Komputer pilih : %c\n\n",kamu, komputer);
    // === Output ===

    return 0;
}
