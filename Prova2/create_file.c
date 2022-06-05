/* MADE BY */
// BERNARDO ALVIM 2021951426
// KAIO FERNANDES 2021951280

#include <stdio.h>
#include <string.h>
#include "listas.h"
#include "pilhas.h"
#include "fila.h"

void stack_create(){

}

void queue_create(){

}

void priority_q_create(){

}

int main(int argc, char **argv){
    char esc_est;

    (void)printf("Menu bla bla bla \nInsira qual tipo de estrutura deseja criar etc e etc\n");
    scanf("%c", &esc_est);
    switch (esc_est)
    {
    case 's':
        // cria a pilha etc..
        stack_create();
        break;
    case 'q':
        // cria a fila etc..
        queue_create();
    case 'P':
        // cria a fila com prioridade etc.. 
        priority_q_create();
    default:
        break;
    }

    return EXIT_SUCCESS;
}