/* MADE BY */
// BERNARDO ALVIM 2021951426
// KAIO FERNANDES 2021951280

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void compara_e(int * e_in, int * e_out, int qtd_op){
    int e_out_rev[qtd_op];

    if (memcmp(&e_in, &e_out, sizeof(e_in)) == 0)
    {
        (void)printf("queue");
    }

    for (int i = 0; i < qtd_op; i++)
    {
        for (int j = qtd_op; j > 0; j--)
        {
            e_out_rev[i] = e_out[j];
        }
    }
    if (memcmp(&e_in, &e_out_rev, sizeof(e_in)) == 0)
    {
        (void)printf("stack");
    }
    
    if ()
    {
        (void)printf("priority queue");
    }

    (void)printf("impossible");
}

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

            e_entrada = (int*) malloc(sizeof(int) * qtd_op);
            e_saida = (int*) malloc(sizeof(int) * qtd_op);

            for (int i = 0; i < qtd_op; i++)
            {
                
            }
            compara_e(e_entrada, e_saida, qtd_op);

            free(e_entrada);
            free(e_saida);
            n_lines += qtd_op;
        }
    }

    return EXIT_SUCCESS;
}