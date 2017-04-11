#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define N 36

int random_element(int dolna_hranica){    
    return (rand() % (N - dolna_hranica) + dolna_hranica);
}

void nahodny_rastuci_retazec(char *r, char l){
    int j = 0;
    int i,nahodny_element;
    char aux_array[N];
    
    for (i = '0'; i <= '9'; i++)
    {
        aux_array[j] = i;
        j++;
    }
    for (i = 'a'; i <= 'z'; i++)
    {
        aux_array[j] = i;
        j++;
    }
    
    nahodny_element = random_element(0);
    r[0] = aux_array[nahodny_element];
    
    for (i = 1; i < l; i++)
    {
    	nahodny_element = random_element(nahodny_element);
    	r[i] = aux_array[nahodny_element];
    }
    r[l+1] = 0;
}



int main(int argc, char const *argv[]){
    int i,counter=0;
    char l;
    char *r;
    
    l=127;
    printf("Dlzka retazca je: %d\n",l);
   
    r = malloc((l+1) * sizeof(char));
    if (r == NULL) {
        printf("FAILED\n");
        return 1;
    }

	srand (time(NULL));

	nahodny_rastuci_retazec(r,l);
    
    printf("\n");

    for (i = 0; i < l; i++)
    {
        printf("%c ",r[i]);
        counter++;
    }

    printf("\n%d\n",counter);
    
    free(r);
    return 0;    
}