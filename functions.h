#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#define F 22
#define C 30
#define MAX 30*15

typedef struct Pessoa {
                char nome[50];
                char telefone [13];
				char email[50];
				char status; //'L' = livre ; 'O' = ocupado ; 'R' = reservado
				char cpf[13];
				long int rg;
				int tipo;
				int senha;
                }Pessoa;

typedef struct teatro {Pessoa assento[F][C];
				int receita;
				int id[MAX];
				char nomedapeca[60];
				char datadapeca[15];
				char horariodapeca[7];
			   }teatro;

struct Pessoa V[MAX];
			   
int buscar(int n);

void menu();

void iniciar_teatro(teatro *t);

void checar_assentos(teatro t);

char vender_assentos(teatro t, int i, int j);

char reservar_assentos(teatro t,int i,int j);

void checar_info(teatro t, int i, int j);

int linhaX();
int colunaY();

void remover_pessoa(teatro *t, int i, int j);

void Carregar_teatro(teatro *t);

void Gravar_teatro(teatro t);

void insertionSortRG(struct Pessoa *V, int n);


#endif // FUNCTIONS_H