/* MADE BY */
// BERNARDO ALVIM 2021951426
// KAIO FERNANDES 2021951280

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define STACK (10)
#define QUEUE (20)
#define P_QUEUE (30)

void bubbleSort(int v[], int tam){
	int c, cc, aux=0;
	for(c = tam-1; c > 0; c--){
		for(cc = 0; cc < c; cc++){
            if (v[c] > v[cc]) {
                aux = v[c];
                v[c] = v[cc];
                v[cc] = aux;
            }
		}
	}
}

int checa_elem(int * e_in, int qtd_e, int N){
    for (int k = 0; k < qtd_e; k++)
    {
        if (e_in[k] == N)
        {
            return 1;
        }
    }
    return 0;
}

int queue_(int* e_in, int* e_out, int qtd_e, int qtd_s){
    //Verifica se os dois vetores são iguais
    for (int i = 0; i < qtd_s; i++)
    {
        if(e_in[i] != e_out[i]){
		return 0;
	    }
    }
    return 1;
}

int stack_(int* e_in, int* e_out, int qtd_e, int qtd_s){
	int aux, j = qtd_s-1;
	int buffer[qtd_s];
	
    //Invertendo o vetor de saida para um vetor buffer
	for(int i = 0; i < qtd_s; i++){
		buffer[i] = e_out[j];
        j--;
	}

    //Comparando o buffer com o vetor de entrada
	for (int c = 0; c < qtd_s; c++)
    {
        if(e_in[c] != buffer[c]){
		return 0;
	    }
    }
    return 1;
}

int queue_p(int* e_in, int* e_out, int qtd_e, int qtd_s){
    int buffer[qtd_s];

    //Copiando o vetor de saida para o buffer
	for (int i = 0; i < qtd_s; i++)
    {
        buffer[i] = e_out[i];
    }

    //Ordenando o vetor de forma decrescente
    bubbleSort(buffer, qtd_s);

    //Comparando o buffer ja ordenado com o vetor de saida
    for (int c = 0; c < qtd_s; c++)
    {
        if(e_out[c] != buffer[c]){
		return 0;
	    }
    }
    return 1;
}

void compara_e(int* e_in, int* e_out, int qtd_e, int qtd_s){
	int value = 0, r = 0;

    //Verifica se o vetor saida é maior que o de entrada, caso sim, retorna impossivel
    if (qtd_e < qtd_s)
    {
        (void)printf("impossible\n");
        return;
    }
    
    //Checagem dos elementos de saida em sua entrada
    for (int i = 0; i < qtd_s; i++)
    {
        if(checa_elem(e_in, qtd_e, e_out[i]) == 0){
            (void)printf("impossible\n");
            return;
        }   
    }
    
	//Verifica se é uma pilha, uma fila, uma fila de prioridade ou isso tudo e mais um pouco
	if((stack_(e_in, e_out, qtd_e, qtd_s)) == 1){
		value = STACK; //identificação de cada estrutura (tipo JS)
		r++; //identificador para casos not sure
	}
	if((queue_(e_in, e_out, qtd_e, qtd_s)) == 1){
		value = QUEUE; //identificação de cada estrutura (tipo JS)
		r++; //identificador para casos not sure
	}
	
	if((queue_p(e_in, e_out, qtd_e, qtd_s)) == 1){
		value = P_QUEUE; //identificação de cada estrutura (tipo JS)
		r++; //identificador para casos not sure
	}
	if((r > 1)){
		(void)printf("not sure\n");
	} else if((value == STACK) && (r == 1)){
		(void)printf("stack\n");
	} else if((value == QUEUE) && (r == 1)){
		(void)printf("queue\n");
	} else if((value == P_QUEUE) && (r == 1)){
		(void)printf("priority queue\n");
	} else{
		(void) printf("impossible\n");
	}
	
}

int main(int agrc, char** agrv){
    //Variaveis
    int * e_entrada;
    int * e_saida;
    int qtd_op = 0, qtd_e = 0, qtd_s = 0, op, val;
    //Arquivo(s)
    FILE * arq;
    //Caminho(s)
    char * path = "./entrada.txt";

    //Abrindo o arquivo
    arq = fopen(path, "r");
    //Verificando se o arquivo foi aberto
    if(arq != NULL){
        //Lendo o arquivo
        while (!feof(arq))
        {
            //Pegando as operações
            fscanf(arq, "%d",  &qtd_op);

            //Alocando os vetores de entrada e saida
            e_entrada = (int*) malloc(sizeof(int) * qtd_op);
            e_saida = (int*) malloc(sizeof(int) * qtd_op);

            //Tamanho dos vetores
            qtd_s = 0;
            qtd_e = 0;

            //Lendo os valores
            for (int i = 0; i < qtd_op; i++)
            {
                fscanf(arq, "%d %d", &op, &val);
                if(op == 1){
                    e_entrada[qtd_e] = val;
		            qtd_e++;
                }
                if(op == 2){
                    e_saida[qtd_s] = val;
                    qtd_s++;
                }
            }
            
            //Comparando os vetores para ver se é uma pilha, fila ou fila de prioridade
            compara_e(e_entrada, e_saida, qtd_e, qtd_s);

            //Liberabdo os vetores para a proxima leva de operações
            free(e_entrada);
            free(e_saida);
        }
    }

    return EXIT_SUCCESS; //FIM SELO EL MAIA PROGRAMAÇÃO OSTENCAÇÃO
}
