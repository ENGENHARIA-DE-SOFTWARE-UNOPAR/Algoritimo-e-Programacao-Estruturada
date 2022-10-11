#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define N 100
//#define debug

struct fila { //ESTRUTURA DE MINHA FILA
	int n;
	int ini;
	char vet[N];
};
typedef struct fila Fila;


Fila* inicia_fila (void);
void insere_fila (Fila* f, char elem);
float remove_fila (Fila* f);
int fila_vazia (Fila* f);
void libera_fila (Fila* f);


int main(int argc, char *argv[]) {
	
	
	
	
	
	
	return 0;
}

void libera_fila (Fila* f){
	#ifdef debug
		printf("Está no libera FILA\n");
	#endif
	
	free(f);
}

int fila_vazia (Fila* f){
	#ifdef debug
		printf("Está no FILA VAZIA\n");
	#endif
	
	return f->n == 0;
}


float remove_fila (Fila* f){
	char elem;
	#ifdef debug
		printf("Está no remove FILA\n");
	#endif
	
	
	if (fila_vazia(f)){
		printf("A Fila esta Vazia \n");
		exit(1);
	}
	elem =f->vet[f->ini];
	f->ini= (f->ini+1) ;
	f->n --;
	return elem;
}


Fila* inicia_fila (void){
	Fila* f=(Fila*) malloc(sizeof(Fila));
	f-> n = 0;
	f-> ini = 0;
	
	#ifdef debug
	printf("Está no inicia FILA\n");
	#endif
	
	return f;	
}

void insere_fila (Fila* f, char elem){
	int fim;
	if (f->n == N){
		printf("A Fila está cheia. \n");
		
		#ifdef debug
			printf("Está no insere Fila\n");
		#endif
	}
	fim = (f->ini+ f->n) % N;
	f->vet[fim] = elem;
	f->n++;
}
