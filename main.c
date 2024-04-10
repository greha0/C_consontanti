/*
 * Greta Brugnatti
 * 3AII
 *
 * */

#include <stdio.h>
#define DIM 20

//dichiarazione delle funzioni
int isConson(char c);
void prendiConsonante(char v[], char cons[]);
char esimaCons(char v[]);
void eliminaACapo(char str[]);
char toLower(char c);

int main (void){

    //dichiarazione delle variabili
    char str[DIM]; //stringa inserita dall'utente
    int consonanti;

    //richiesta dei dati all'utente
    printf("Inserire il testo: ");
    fflush(stdout);

    fgets(str, DIM, stdin);

    eliminaACapo(str); //elimina il \n alla fine

    //trasformo tutte le maiuscole in minuscole
    for(int i=0; str[i]!='\0'; i++){
        str[i]=toLower(str[i]);
    }

    for(int i=0; str[i]!='\0'; i++){
        consonanti=isConson(str[i]);
        printf("%d\n", consonanti);
    }



}
int isConson(char c){
    if(c =='a' || c =='e' || c =='i' || c=='o' ||  c == 'u'){
        return 0; // non è una consonante
    } else {
        return 1; // è una consonante
    }
}

void prendiConsonante(char v[], char cons[]){

}
char esimaCons(char v[]);

char toLower(char c) {
    if (c >= 'A' && c <= 'Z') {
        c = c - 'A' + 'a';
    }
    return c;
}

void eliminaACapo(char str[]) {

    int i;

    for (i = 0; str[i] != '\n'; i++) {

    }

    str[i] = '\0';
}
