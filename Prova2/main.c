/* MADE BY */
// BERNARDO ALVIM 2021951426
// KAIO FERNANDES 2021951280

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define STACK (10)
#define QUEUE (20)
#define P_QUEUE (30)

void bubbleSort(int ∗v, int tam){
	int c, cc, aux;
	for(i = t; i > 0; i--){
		for(j = 0; j < i; j++){
		}
	}
}

int queue_(int* e_in, int* e_out, int qtd_e, int qtd_s){
    for (int i = 0; i < qtd_s; i++)
    {
        if(e_in[i] != e_out[i];){
		return 0;
	}
    }
    return 1;
}

int stack_(int* e_in, int* e_out, int qtd_e, int qtd_s){
	int aux;
	int buffer[qtd_s];
	
	for(int i = qtd_s; i > 0; i--){
		for(int k = 0; k < qtd_s; k++){
			buffer[k] = e_out[i];
		}
	}
	for (int c = 0; c < qtd_s; c++)
    {
        if(e_in[c] != buffer[c];){
		return 0;
	}
    }
    return 1;
}

int queue_p(int* e_in, int* e_out, int qtd_e, int qtd_s){
	
}

void compara_e(int* e_in, int* e_out, int qtd_e, int qtd_s){
	int value = 0, r=0;
	
	if(stack_(int* e_in, int* e_out, int qtd_e, int qtd_s)){
		value = STACK;
		r++;
	}
	
	if(queue_(int* e_in, int* e_out, int qtd_e, int qtd_s)){
		value = QUEUE;
		r++;
	}
	
	if(queue_p(int* e_in, int* e_out, int qtd_e, int qtd_s)){
		value = P_QUEUE;
		r++;
	}
	if((r == 3)||(r == 2)){
		(void)printf("not sure");
	} else if(value == STACK){
		(void)printf("stack");
	} else if(value == QUEUE){
		(void)printf("queue");
	} else if(value == PQUEUE){
		(void)printf("priority queue");
	} else{
		(void) printf("impossible");
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
		    qtd_e++;
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
