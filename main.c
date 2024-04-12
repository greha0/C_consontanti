/*
 * Greta Brugnatti
 * 3AII
 *
 * */

#include <stdio.h>
#define DIM 20

//dichiarazioni delle funzioni
int isConson(char c);
char esimaCons(char v[], int pos);
void eliminaACapo(char str[]);
char toLower(char c);

int main (void){

    //dichiarazioni delle variabili
    char str[DIM];
    char conson[DIM];
    char cons;
    conson[0]='\0';
    int consonante;
    int cont=0;
    int ennesima;

  //
    printf("Inserire il testo: ");
    fflush(stdout);


    fgets(str, DIM, stdin);

    eliminaACapo(str);


    for(int i=0; str[i]!='\0'; i++){
        str[i]=toLower(str[i]);
    }

    for(int i=0; str[i]!='\0'; i++){
        consonante=isConson(str[i]);
        if(consonante==1){

            conson[cont]=str[i];
            conson[cont+1]='\0';

            cont++;
        }

        if(consonante != 2) {
            printf("%d\n", consonante);
            fflush(stdout);
        }
    }

    printf("%s\n", conson);
    fflush(stdout);

    printf("Quale ennesima consonante vuoi? (da 1 a ...)");
    fflush(stdout);
    scanf("%d", &ennesima);
    fflush(stdin);

    cons = esimaCons(conson, ennesima);
    printf("%c", cons);


}
//funzione che controlla lettere
int isConson(char c){
    if(c =='a' || c =='e' || c =='i' || c=='o' ||  c == 'u'){
        return 0;
    } else {
        if(c == ' ' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9' ){
            return 2;
        } else {
            return 1;
        }
    }
}

char esimaCons(char v[], int pos){
    return v[pos-1];
}

//Trasforma maiuscule in minuscole
char toLower(char c) {
    if (c >= 'A' && c <= 'Z') {
        c = c - 'A' + 'a';
    }
    return c;
}

//
void eliminaACapo(char str[]) {

    int i;

    for (i = 0; str[i] != '\n'; i++) {

    }

    str[i] = '\0';
}
