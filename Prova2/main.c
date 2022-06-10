/* MADE BY */
// BERNARDO ALVIM 2021951426
// KAIO FERNANDES 2021951280

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void BubbleSort(int vetor[], int tamanho){
	int aux, i, j;
	for(j=tamanho-1; j>=1; j--){
		for(i=0; i<j; i++){
			if(vetor[i]>vetor[i+1]){
				aux=vetor[i];
                vetor[i]=vetor[i+1];
                vetor[i+1]=aux;
            }
        }
    }
}

void compara_e(int* e_in, int* e_out, int qtd_e, int qtd_s){
    for (int i = 0; i < qtd_s; i++)
    {
        
    }
    
}

int main(int agrc, char** agrv){
    //Variaveis
    int * e_entrada;
    int * e_saida;
    int qtd_op, qtd_e, qtd_s, op, val;
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

            qtd_s = 0;
            qtd_e = 0;

            for (int i = 0; i < qtd_op; i++)
            {
                fscanf(arq, "%d %d", &op, &val);
                if(op == 1){
                    e_entrada[i] = val;
                }
                if(op == 2){
                    e_saida[i] = val;
                    qtd_s++;
                }
                compara_e(e_entrada, e_saida, qtd_e, qtd_s);
            }

            free(e_entrada);
            free(e_saida);
        }
    }

    return EXIT_SUCCESS;
}
