/* MADE BY */
// BERNARDO ALVIM 2021951426
// KAIO FERNANDES 2021951280

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int agrc, char** agrv){
    //Variaveis
    int qtd_op, op, elem, ct;
    //Arquivo(s)
    FILE * arq;
    //Caminho(s)
    char * path = "./arquivo.bin";

    scanf("%d", &qtd_op);
    ct = 1;
    for (int i = 0; i < qtd_op; i++)
    {
        scanf("%d%d", &op, &elem);
        if(op == 1){
            arq = fopen(path, "w");
            if(arq != NULL){
                fwrite(elem, sizeof(int), ct, arq);
            }
            ct++;
        }
    }
    return EXIT_SUCCESS;
}
