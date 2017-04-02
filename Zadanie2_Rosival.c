#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define N 36

void destroy_string(char *to_destroy){
    free(to_destroy);
}


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
	int aux;
	char l;
	char *r;

	printf("Zadajte dlzku retazca,min. 1 a max. dlzka 36\n");
	
	scanf("%d",&aux);
	l=(char) aux;


	while ((l < 1) || (l>36))
	{
		printf("Zadali ste nespravnu dlzku retazca, zadajte znova prosim.\n");
		scanf("%d",&aux);
		l=(char) aux;

	}

	printf("Dlzka retazca je: %d\n",l);

	// r=(char *) malloc(l);

	// destroy_string(r);



}