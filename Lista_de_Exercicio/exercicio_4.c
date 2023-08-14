#include<stdio.h>

int eh_vogal (char c){
    if(c == 'a' || c == 'e' || c == 'i'|| c == 'o' || c == 'u'){
        return 1;
    }
    return 0;
}

void exercicio_4 (char *fn){
    char c;
    FILE*arquivo;
    arquivo = fopen(fn, "r");
    int vogais = 0;
    int consoantes = 0;

   while(fscanf(arquivo, "%c",&c) != EOF){
        //printf("%c\n", c);
        if (eh_vogal (c)){
            vogais++; // incrementa mais um.
        }
        else if (c > 65 && c < 90 || c > 97 && c < 122){
            consoantes = consoantes + 1; // incrementa mais um.
        }
    
    } 
    printf("vogais = %d\n", vogais);
    printf("consoantes = %d\n", consoantes);
    fclose (arquivo);

}



int main (){

    exercicio_4 ("arq.txt");
    
    return 0;
}