#include<stdio.h>

void exercico_6 (char *fn){
    char c;
    FILE*arquivo;
    arquivo = fopen (fn, "r");
    int i;
    char temp;
    int cont;

    for(i = 65; i<91; i++){
        temp = i;
        cont = 0;
        fseek(arquivo, 0, SEEK_SET);
        while(fscanf(arquivo, "%c", &c) !=EOF){
            if(c == temp){
                cont++;
            }
        }
        printf("%c = %d\n", temp, cont);
    }
    printf("\n");
    
    for (i = 97; i<123; i++){
        temp = i;
        cont = 0;
        fseek(arquivo, 0, SEEK_SET);
        while(fscanf(arquivo,"%c", &c)!= EOF){
            if(c==temp){
                cont++;
            }
        }
        printf("%c = %d\n", temp, cont);
    }
    fclose (arquivo);

}

int main(){

    exercico_6("arq.txt");

    return 0;
}