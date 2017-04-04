#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define N 36

// void alokacia (int **adresa) {
//   *adresa = malloc (sizeof (char) * 6);
//   printf ("%p\n", adresa);
// }

// void useData (int *adresa) {
//   printf ("%p\n", adresa);
// }


// void test_adresa(char *r){
//    printf("adresa vo funkcii %p\n",(void*)&r);
// }

void testpameti(char *pointer, char l){
	for (int i = 0; i < l; i++)
    {
    	pointer[i]='A';
    }
	pointer[10]=0;

}

int main(int argc, char const *argv[]){
    int aux;
    char *pointer = NULL;
    char l;
    int counter=0;
    
    l = 10;

    pointer = (char *) malloc((l+1) * sizeof(char));
    if (pointer == NULL) {
        printf("FAILED\n");
        return -1;
    }

    testpameti(pointer,l);

    for (int i = 0; i < l; i++)
    {
    	printf("%c\n",pointer[i]);
    }

 //    for (int i = 0; i < l; i++)
 //    {
 //    	pointer[i]='A';
 //    	printf("%c\n",pointer[i]);
 //    	counter++;
 //    }
	// pointer[10]=0;
	
	// printf("%d\n",counter );
	// test_adresa((void*)&pointer[0]);

	// alokacia (&adresa);

 //  	useData (adresa);

	free(pointer);
}