#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define N 36

int random_element(int dolna_hranica){
    
    srand (time(NULL));
    
    return rand() % (N + 1 - dolna_hranica) + dolna_hranica;
}

void nahodny_rastuci_retazec(char *r, char l){
    int j = 0;
    int i,aux;
    unsigned char aux_array[N];
    
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
    
    aux = random_element(0);
    r[0] = aux_array[aux];
    
    for (i = 1; i < l; i++)
    {
        aux = random_element(aux);
        r[i] = aux_array[aux];
    }
    r[i+1] = 0;
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
    
    r = (char *) malloc((l+1) * sizeof(char));
    
    nahodny_rastuci_retazec(r,l);
    
    for (int i = 0; i < l; i++)
    {
        printf("r[i]\n");
    }
    
    free(r);
}