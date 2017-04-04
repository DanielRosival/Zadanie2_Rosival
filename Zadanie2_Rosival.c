#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#define N 36

int random_element(int dolna_hranica){
    
    srand (time(NULL));
    
    return (rand() % (N + 1 - dolna_hranica) + dolna_hranica);
}

void nahodny_rastuci_retazec(char *r, char l){
    int j = 0;
    int i,nahodny_element;
    char aux_array[N];
    
    for (i = '0'; i <= '9'; i++)
    {
        aux_array[j] = i;
        j++;
        printf("%c ", aux_array[j]);
    }
    for (i = 'a'; i <= 'z'; i++)
    {
        aux_array[j+10] = i;
        j++;
        printf("%c ", aux_array[i+10]);
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
    int aux,i;
    char l;
    char *pointer;
    
    printf("Zadajte dlzku retazca,min. 1\n");
    
    scanf("%d",&aux);
    l = (char) aux;
    printf("Dlzka retazca je: %d\n",l);
    
    // while (l < 1)
    // {
    //     printf("Zadali ste nespravnu dlzku retazca, zadajte znova prosim.\n");
    //     scanf("%d",&aux);
    //     l=(char) aux;
    // }
    
    

    pointer = malloc((l+1) * sizeof(char));
    if (pointer == NULL) {
        printf("FAILED\n");
        return -1;
    }


	nahodny_rastuci_retazec(pointer,l);

    
    for (i = 0; i < l; i++)
    {
        printf("%c\n",pointer[i]);
    }
    
    free(pointer);
    return 0;    
}