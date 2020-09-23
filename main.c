#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
char nama[20],kelas[10],npm[10],hobi[20],status[20],jurusan[20];

printf("Masukan nama:");
scanf("%s",nama);
printf("Masukan kelas:");
scanf("%s",kelas);
printf("Masukan npm:");
scanf("%s",npm);
printf("Masukan hobi:");
scanf("%s",hobi);
printf("Masukan status:");
scanf("%s",status);
printf("Masukan jurusan:");
scanf("%s",jurusan);
printf("\n");

printf("Nama:");
printf(nama,"");
printf("\nKelas:");
printf(kelas,"");
printf("\nNPM:");
printf(npm,"");
printf("\nHobi:");
printf(hobi,"");
printf("\nStatus:");
printf(status,"");
printf("\nJurusan:");
printf(jurusan,"");
	return 0;
}
