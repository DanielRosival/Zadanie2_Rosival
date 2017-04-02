#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define N 36

void destroy_string(char *to_destroy){
    free(to_destroy);
}


void nahodny_rastuci_retazec(char *r, char l){
	unsigned char aux_array[N];
	int j=0;

	for (unsigned char i = '0'; i <= '9'; i++)
	{
		aux_array[j] = i;
		j++;
 		printf("%c ", aux_array[j]);
 	}
 	for (unsigned char i = 'a'; i <= 'z'; i++)
	{
		aux_array[j+10] = i;
		j++;
		printf("%c ", aux_array[i+10]);
 	}

}



int main(int argc, char const *argv[]){
	int aux;
	char l;
	char *r;

	printf("Zadajte dlzku retazca,min. 1\n");
	
	scanf("%d",&aux);
	l=(char) aux;


	while (l < 1)
	{
		printf("Zadali ste nespravnu dlzku retazca, zadajte znova prosim.\n");
		scanf("%d",&aux);
		l=(char) aux;
	}

	printf("Dlzka retazca je: %d\n",l);

	r=(char *) malloc(l);

	nahodny_rastuci_retazec(r,l);

	// destroy_string(r);



}