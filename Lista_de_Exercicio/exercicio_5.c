#include <stdio.h> 

int eh_letra (char c){
    if (c > 65 && c < 90 || c > 97 && c < 122){
        return 1;
    }
    return 0;
}

int eh_vogal (char c){
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        return 1;
    }
    return 0;
}

void exercicio_5 (char *fn, char x){
    char c;
    FILE*arquivo;
    arquivo = fopen (fn, "r");
    int vogais = 0;
    int letras = 0;
    int conta_usuario = 0;

    while (fscanf (arquivo, "%c", &c) != EOF){
        if(c == x){
            conta_usuario++;
        }
        if (eh_vogal (c)){
            vogais++; 
        }
        else if(eh_letra (c)){
            letras++;
        }
    }
    printf("vogais = %d\n", vogais);
    printf("consoantes = %d\n", letras);
    printf("%c = %d\n", x, conta_usuario);
    fclose (arquivo);

}

int main (){
    char c;
    scanf("%c", &c);

    exercicio_5 ("arq.txt", c);

    return 0;
}