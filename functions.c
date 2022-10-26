#include <stdio.h>
#include "functions.h"

void menu() {
   printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
   printf("\t ADMINISTRACAO DO TEATRO");
   printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
   printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  MENU  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
   printf("   1 - Checar assentos -\n");
   printf("   2 - Reserva de assentos -\n");
   printf("   3 - Compra de assentos -\n");
   printf("   4 - Exibir informacao de um determinado assento -\n");
   printf("   5 - Exibir arrecadacao total -\n");
   printf("   6 - Cancelar compra ou reserva de assento -\n");
   printf("   7 - Sair da aplicacao -\n\n");  
   printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
   printf("\n   Opcao: ");
 }	
 
 
void iniciar_teatro(teatro *t) {
int i, j;
for(i=0;i<F;i++)
	{ for(j=0;j<C;j++)
 	 { 	
t->assento[i][j].status = 'L';
t->assento[i][j].cpf[0] = '\0';
		 }}
	t-> receita = 0.0;	
printf("\n   Insira o nome da peca:\n   ");
fgets(t->nomedapeca,60,stdin);
printf("\n   Insira a data da peca:\n   ");
fgets(t->datadapeca,15,stdin);
printf("\n   Insira horario da peca:\n   ");
fgets(t->horariodapeca,7,stdin);		
 }

 void checar_assentos(teatro t) {
   int i,j;
   printf("\n\n  				  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
   printf("\t				  ASSENTOS DO TEATRO\n");
   printf("  				  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
   printf("     01 02 03 04 05 06 07 08 09 10 11 12 13 14 15     16 17 18 19 20 21 22 23 24 25 26 27 28 29 30\n");
   printf("                                                   \n");
   for(i=0;i<F;i++) {
	   printf("%2d -",i+1);
       for(j=0;j<C-1;j++) { if(j<15)
							printf("%3c",t.assento[i][j].status);
							}
							printf("  ||");
		for(j=0;j<C-1;j++) { if(j>14)
							printf("%3c",t.assento[i][j].status);
							}
       printf("%3c\n",t.assento[i][j].status);
      }
	  printf("%3c\n",t.assento[F][C].status);
	  printf("\n   L - Livre\n   O - Ocupado\n   R - Reservado\n");
      printf("\n   Aperte qualquer tecla para voltar ao menu principal ");
      getch();
    }
//reservar assentos
    char reservar_assentos(teatro t, int i, int j) {
   

	   if(t.assento[i][j].status=='L'){
       t.assento[i][j].status = 'R';
       printf("\n   RESERVA EFETIVADA COM SUCESSO !!\n");
	   printf("\n   Aperte qualquer tecla para voltar ao menu principal ");
      getch();
   }    
   else if (t.assento[i][j].status=='O')
             printf("\n\n   CADEIRA JA OCUPADA!! POR GENTILEZA ESCOLHA OUTRA !!\n\n");
        else if(t.assento[i][j].status=='R')
               printf("\n\n   CADEIRA JA RESERVADA!! POR GENTILEZA ESCOLHA OUTRA !!\n\n");
    
   return (t.assento[i][j].status);
} 
//vender assentos    
    char vender_assentos(teatro t,int i, int j) {
if (t.assento[i][j].status=='O'){
             printf("\n   CADEIRA JA OCUPADA!! POR GENTILEZA ESCOLHA OUTRA !!\n");}
if(t.assento[i][j].status=='R'){
               printf("\n   CADEIRA JA RESERVADA!! POR GENTILEZA ESCOLHA OUTRA !!\n");}
if(t.assento[i][j].status=='L'){
               t.assento[i][j].status = 'O';
               printf("\n   VENDA EFETIVADA COM SUCESSO !!\n");
   } 
   printf("\n   Pressione qualquer tecla para voltar ao menu principal ");
				        getch();
 
   return(t.assento[i][j].status);
}  
//arrecadar


//ler a linha oferecida pelo usuario
int linhaX(){
   int i;
   printf("   Linha: "); scanf("%d",&i);
   return i-1;
}
//ler a coluna oferecida pelo usuario
int colunaY(){
   int j;
   printf("   Coluna: "); scanf("%d",&j);
   return j-1;                          
}


void checar_info(teatro t, int i, int j) {
	if (t.assento[i][j].status == 'L')
	{
		printf("\n   Assento disponivel!\n");
		printf("\n   Aperte qualquer tecla para voltar ao menu principal ");
    getch();
	}
	else {
	printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
	printf("\n   Nome: %s",t.assento[i][j].nome);
	printf("   Telefone: %s",t.assento[i][j].telefone);
	printf("   Email: %s",t.assento[i][j].email);
	printf("   CPF: %s",t.assento[i][j].cpf);
	printf("   RG: %d",t.assento[i][j].rg);
	printf("\n   Senha: ****");
	printf("\n\n   Status: "); 
	if (t.assento[i][j].status == 'O') {
		printf("Ocupado\n");
	}
	else if (t.assento[i][j].status == 'R') {
		printf("Reservado\n");
	}
	printf("   Tipo de entrada: ");
	if (t.assento[i][j].tipo == 1) {
		printf("Meia\n");
	}
	else if (t.assento[i][j].tipo == 2) {
		printf("Inteira\n");
	}
	else{
		printf("Entrada ainda nao foi comprada\n");
	}
	printf("\n   Aperte qualquer tecla para voltar ao menu principal ");
    getch();
    }
}

void checar_info2(teatro t, int i, int j) {
	printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
	printf("\n   Nome: %s",t.assento[i][j].nome);
	printf("   CPF: %s",t.assento[i][j].cpf);
	printf("   Status: "); 
	if (t.assento[i][j].status == 'O') {
		printf("Ocupado\n");
	}
	else if (t.assento[i][j].status == 'R') {
		printf("Reservado\n");
	}
	printf("   Tipo de entrada: ");
	if (t.assento[i][j].tipo == 1) {
		printf("Meia\n");
	}
	else if (t.assento[i][j].tipo == 2) {
		printf("Inteira\n");
	}
	else{
		printf("Entrada ainda nao foi comprada\n");
	}
}

void remover_pessoa(teatro *t, int i, int j){
 t->assento[i][j].nome[0] = '\0';
 t->assento[i][j].telefone[0] = '\0';
 t->assento[i][j].email[0] = '\0';
 t->assento[i][j].cpf[0] = '\0';
 t->assento[i][j].status = 'L';
 t->receita -= 15*t->assento[i][j].tipo;
 t->assento[i][j].tipo = 0;
 t->assento[i][j].senha = 0;
 t->assento[i][j].rg = 0;
}
/*
int find_node_by_codei(teatro t, int code) {

    int i= 0;
    int j= 0;
    for(i = 0; i < F; i++){
        for(j = 0; j < C; j++){
            if(t.assento[i][j].rg == code) {
            return i;
			}
			else return 3;
        }
    }
}

int find_node_by_codej(teatro t, int code) {

    int i= 0;
    int j= 0;
    for(i = 0; i < F; i++){
        for(j = 0; j < C; j++){
            if(t.assento[i][j].rg == code) {
			return j;
			}
			else return 3;
        }
    }
}*/

void Carregar_teatro(teatro *t){
	FILE *fp;
    
	fp = fopen ("Teatro.dat", "rb"); 
	if (fp == NULL) {  
		iniciar_teatro(&(*t));
	} else {
		fread(&(*t),sizeof(teatro),1,fp); 
	    fclose(fp);
	}
}
void Gravar_teatro(teatro t) {
	FILE *fp;  
	
	fp = fopen ("Teatro.dat", "wb"); 
	if (fp == NULL) {  
		printf ("Erro ao abrir o arquivo.\n");  
		return;  
	} else {  
		printf ("Arquivo Binario criado com sucesso.\n");  
		fwrite(&t, sizeof(teatro), 1, fp); 
	}         
	fclose (fp);        
} 

void insertionSortRG(struct Pessoa *V, int n) {
	int i, j;
	struct Pessoa aux;
	for (i = 1; i < n; i++) {
		aux = V[i];
		for(j = i; (j>0) && (aux.rg<V[j-1].rg); j--)
			V[j] = V[j-1];
		V[j] = aux;
	}
}