#include <stdio.h>

// harus mendeteksi genap atau ganjil dengan operator switch
void main(){
	int angka = 0;
	
	//masukkan angka
	printf("Angka: ");
	scanf("%d", &angka);
	
	/* tampilkan hasil, dengan syarat untuk mendeteksi angka genap 
	 * bilangan genap adalah bilangan yang habis dibagi 2 jadi rumusnya adalah (angka % 2)(angka  habis dibagi 2)
	 */ 
	switch((angka % 2) )
	{
		case 0 	: printf(" Nilai genap .\n");
				  break;
	    default : printf (" Nilai ganjil .\n");
				
	}
}