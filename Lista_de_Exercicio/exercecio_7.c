#include <stdio.h>


void exercicio_7(char *fn){
    char c;
    FILE*arquivo;
    FILE*resul_arq;
    resul_arq = fopen ("resul_arq", "w");
    arquivo = fopen (fn, "r");

    fclose (arquivo);
}

int main(){

    return 0;
}