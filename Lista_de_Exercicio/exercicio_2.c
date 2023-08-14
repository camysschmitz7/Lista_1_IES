#include <stdio.h>
#include<stdlib.h>

void exercicio_2 (char *fn){
    char c;
    int contador_de_linha = 1;
    FILE* arquivo;
    arquivo = fopen (fn, "r");
    ;
    while(fscanf(arquivo, "%c",&c) != EOF){
        if (c == '\n'){
            contador_de_linha = contador_de_linha+1;
        } 
    } 
    
    printf ("%d\n", contador_de_linha);
       
    fclose(arquivo);
}


int main(){
    exercicio_2 ("arq.txt");
    
    return 0;
}