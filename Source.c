#include <stdio.h>
#include <conio.h>

int main() {
	char* Alamat_X;		// Menyiapkan variabel Alamat_X bertipe Pointer to char
	char X;

	X = 'a';
	Alamat_X = &X;

	printf("Nilai Variabel X, yaitu: %c. Disimpan pada alamat: %p", X, Alamat_X);
	
	_getch();
	return 0;
}