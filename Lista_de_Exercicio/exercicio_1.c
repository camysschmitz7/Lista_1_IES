#include<stdio.h>
#include<stdlib.h>

//entrada no usuario e escreve no arquivo.

void exercicio_1(char *fn){
    char c;
    FILE*arquivo;
    arquivo = fopen (fn, "w+"); // abrir arquivo e escrever.
   
    while(1){ // while vai rodar infinitamente.
        scanf("%c%*c",&c);
        if(c == '0'){ // condicao de parada do while.
            break;
        }
        fprintf(arquivo, "%c\n", c); // printar os caracteres no arquivo.
    } 
    fclose (arquivo); // fechar arquivo.
}

// printa conteudo do arquivo.

void print_arquivo (char *fx){
    char x;
    FILE*arquivo;
    arquivo = fopen (fx, "r");
    
    if(arquivo == NULL){
        printf("Erro, nao foi possivel abrir o arquivo\n");
    }
    else 
        while ( (x=fgetc(arquivo))!= EOF){ // pega os caracteres e printa.
            putchar (x);
        }
    fclose (arquivo);
}

int main()
{
   //exercicio_1("arq.txt"); 
    
    printf("\n");
    
    print_arquivo ("arq.txt");

    return 0;
}
