#include<stdio.h>

int eh_vogal (char c){
    if(c == 'a' || c == 'e' || c == 'i'|| c == 'o' || c == 'u'){
        return 1;
    }
    return 0;
}

void exercicio_3 (char *fn){
    char c;
    FILE*arquivo;
    arquivo = fopen(fn, "r");
    int vogais = 0;

   while(fscanf(arquivo, "%c",&c) != EOF){
        //printf("%c\n", c);
        if (eh_vogal (c)){
            vogais = vogais + 1;
        } 
    } 
    printf("%d\n", vogais);
    fclose (arquivo);

}



int main (){

    exercicio_3 ("arq.txt");
    return 0;
}