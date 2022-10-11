#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


#define debug

struct Pilha {
	int topo;
	int capacidade;
	float* proxElen;
};
struct Pilha minhaPilha;

void cria_pilha (struct Pilha *p, int c);
void push_pilha (struct Pilha *p, float v);
float pop_pilha (struct Pilha* p);
int pilha_vazia (struct Pilha* p);
int pilha_cheia (struct Pilha* p);

int main(int argc, char *argv[]) {
	#ifdef debug
		printf("Esta no main");
	#endif
	
		
	return 0;
}


int pilha_vazia (struct Pilha* p){
	#ifdef debug
		printf("Verifica se a pilha esta vazia. \n.");
	#endif
	if (p->topo == -1){
		return 1;
	} 
	else {
		return 0;
	}
}


int pilha_cheia (struct Pilha* p){
	#ifdef debug
		printf("Verifica se a pilha está cheia. \n");
	#endif
	if (p->topo == p->capacidade -1){
		return 1;
	}
	else{
		return 0;
	}
}

float pop_pilha (struct Pilha* p){
	#ifdef debug
		printf("Esta no Remove pilha \n");
	#endif
	float aux = p->proxElen[p->topo];
	p->topo--;
	return aux;
}


void push_pilha (struct Pilha *p, float v){
	#ifdef debug
		printf("Esta na add na pilha\n");
	#endif
	//verificar se a pilha está cheia???	
	p->topo++;
	p->proxElen [p->topo] = v;
	
}

void cria_pilha (struct Pilha *p, int c){
	#ifdef debug
		printf("Esta no cria Pilha \n");
	#endif
	
	p->proxElen = (float*) malloc (c* sizeof (float));
	p->topo = -1;
	p->capacidade = c;	
}
