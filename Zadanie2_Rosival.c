#include <stdio.h>
#include <math.h>
#define N 36

void nahodny_rastuci_retazec(char *r, char l){
	unsigned char aux_array[N];

	for (int i = 0; i < 10; i++)
	{
		aux_array[i] = '0'+i;
 		printf("%c ", aux_array[i]);
 	}
 	for (int i = 0; i < 26; i++)
	{
		aux_array[i+10] = 'a'+i;
		printf("%c ", aux_array[i+10]);
 	}
}



int main(int argc, char const *argv[]){
}