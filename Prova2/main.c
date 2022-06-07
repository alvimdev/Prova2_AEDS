/* MADE BY */
// BERNARDO ALVIM 2021951426
// KAIO FERNANDES 2021951280

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int agrc, char** agrv){
    //Variaveis
    int * e_entrada;
    int * e_saida;
    int qtd_op, op, ct, n_lines=1;
    //Arquivo(s)
    FILE * arq;
    //Caminho(s)
    char * path = "./entrada.txt";

    arq = fopen(path, "r");
    if(arq != NULL){
        while (!EOF)
        {
            fscanf(arq, "%d",  &qtd_op);

            malloc();//e_entrada
            malloc();//e_saida

            for (int i = 0; i < qtd_op; i++)
            {
                // code
            }
            n_lines = qtd_op;
        }
    }

    return EXIT_SUCCESS;
}
