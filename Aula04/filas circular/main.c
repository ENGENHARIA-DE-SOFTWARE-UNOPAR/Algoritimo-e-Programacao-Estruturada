#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define N 10
#define debug

struct filacirc {
	int tam, ini, fim;
	char vet[N]
};
typedef struct filacirc FilaCirc;


char remove_fila (FilaCirc* f);
int fila_vazia (FilaCirc* f);
void insere_fila (FilaCirc* f, char elem);
void inicia_fila (FilaCirc *f);


int main(int argc, char *argv[]) {
	
	
	
	
	return 0;
}

void inicia_fila (FilaCirc *f){
	
	#ifdef debug
		printf("Esta no Inicia FIla\n");
	#endif
	
	f -> tam = 0;
	f -> ini = 1;
	f -> fim = 0;
}

void insere_fila (FilaCirc* f, char elem){
	
	#ifdef debug
		printf("Esta no insere FIla\n");
	#endif
	
	if (f -> tam == N - 1){   /* Verifica se a Fila está completa */
		printf("A fila esta cheia\n");
	} else { /* Caso a Fila não esteja completa, inserimos o elemento */
		f -> fim = (f -> fim % (N - 1)) + 1;
		f -> vet[f -> fim] = elem;
		f -> tam++;
	}
}

int fila_vazia (FilaCirc* f){
	
	#ifdef debug
		printf("Esta no Fila Vazia\n");
	#endif
	
	return (f -> tam == 0); /* Retorna verdadeiro se a Fila estiver vazia */
}

char remove_fila (FilaCirc* f){
	#ifdef debug
		printf("Esta no Remove FIla\n");
	#endif
	
	if (fila_vazia(f)){ /* Verifica se a Fila está vazia */
		printf("Fila vazia\n");
	} else {  /* Caso a Fila contenha elemento, é removido o primeiro */
		f -> ini = (f -> ini % (N-1)) + 1;
		f -> tam--;
	}
}
