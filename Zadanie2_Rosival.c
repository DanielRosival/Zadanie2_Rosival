#include <stdio.h>
#include <math.h>
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

 	r[l]

}



int main(int argc, char const *argv[]){
	char l;
	char *r;

	printf("Zadajte dlzku retazca,min. 1 a max. dlzka 35\n");
	scanf("%c",&l);

	while ((l<1)||(l>N))
	{
		printf("Zadali ste nespravnu dlzku retazca, zadajte znova prosim.\n");
		scanf("%c",&l);
	}

	r=(char *) malloc(l);

	destroy_string(r);



}