#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "functions.h"
		
int main(void){
teatro T;
int op;
int i,j;
int n = 0;
Carregar_teatro(&T);
do{   
   menu();
   scanf("%d", &op);
   switch(op) {
				case 1: checar_assentos(T);
				        break;

				case 2: ;
				        char case2;
				        char cpfteste[13];
				         printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
   						 printf("\t RESERVA DE ASSENTOS");
   						 printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
						i = linhaX();
						j = colunaY();
						if(i>F || j>C || i<0 || j<0)
     					{
       					printf("\n   Esta cadeira nao existe!!! \n\n   Pressione qualquer tecla para voltar ao meu pricipal ");
	   					getch();
       					}
						else {
						if(strlen(T.assento[i][j].cpf) != 0){
							printf("\n   Cadeira ja ocupada! Por gentileza, escolha outra.\n\n");
							printf("   Aperte qualquer tecla para voltar ao menu principal ");
							getch();
						                            }							
						else{			
						 
   						printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");	
						printf("\n	     CADASTRAR:");
						printf("\n\n   CPF: ");	
						getchar();		
						fgets(cpfteste,13,stdin);
						strcpy(T.assento[i][j].cpf, cpfteste);
						printf("\n   Nome: ");
                        fgets(T.assento[i][j].nome,50,stdin);
                        printf("\n   Telefone: ");
						fgets(T.assento[i][j].telefone,13,stdin);
						printf("\n   Email: ");
						fgets(T.assento[i][j].email,50,stdin);
						printf("\n   Registro Geral (RG): ");
						scanf("%d",&T.assento[i][j].rg);
						printf("\n   Senha de 4 digitos: ");
						scanf("%d",&T.assento[i][j].senha);
				        case2 = reservar_assentos(T, i, j);
				        T.assento[i][j].status = case2;}}
				        break;    

				case 3: ;
				        char case3;
				         printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
   						 printf("\t  COMPRA DE ASSENTOS");
   						 printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
						i = linhaX();
						j = colunaY();
						if(i>F || j>C || i<-1 || j<-1)
     					{
       					printf("\n   Esta cadeira nao existe!!! \n\n   Pressione qualquer tecla para voltar ao meu pricipal ");
	   					getch();
       					}
						else {
						if(strlen(T.assento[i][j].cpf) != 0){
							printf("\n   Cadeira ja ocupada! Por gentileza, escolha outra.\n");
							printf("\n   Aperte qualquer tecla para voltar ao menu principal ");
							getch();
						                            }						
						else{		
							printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");	
						printf("\n	     CADASTRAR:");
						printf("\n\n   CPF: ");	
						getchar();		
						fgets(cpfteste,13,stdin);
						strcpy(T.assento[i][j].cpf, cpfteste);
						printf("\n   Nome: ");
                        fgets(T.assento[i][j].nome,50,stdin);
                        printf("\n   Telefone: ");
						fgets(T.assento[i][j].telefone,13,stdin);
						printf("\n   Email: ");
						fgets(T.assento[i][j].email,50,stdin);
						printf("\n   Registro Geral (RG): ");
						scanf("%d",&T.assento[i][j].rg);
						printf("\n   Senha de 4 digitos: ");
						scanf("%d",&T.assento[i][j].senha);
						T.id[n] = T.assento[i][j].rg;
						printf("oioioioi // %d //", T.assento[i][j].rg);
						n++;
						printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
						printf("\n   Qual sera o tipo do ingresso? \n");
						printf("\n   1. Meia \n");
						printf("\n   2. Inteira \n");
						printf("\n   Opcao: "); 
						scanf("%d",&T.assento[i][j].tipo);
						if (T.assento[i][j].tipo != 1 && T.assento[i][j].tipo != 2)
						{
							printf("\n   Opcao invalida!\n");
							printf("\n   Aperte qualquer tecla para voltar ao menu principal ");
							getch();
						}
						else {
																		
				        case3 = vender_assentos(T, i, j);
				        T.assento[i][j].status = case3;
						T.receita += 15*T.assento[i][j].tipo;}}}
						break;
						
				case 4: printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
						printf("\n           CHECAR INFORMACAO\n\n");
						i = linhaX();
						j = colunaY();
						if(i>F || j>C || i<0 || j<0)
     					{
       					printf("\n   Esta cadeira nao existe!!! \n\n   Pressione qualquer tecla para voltar ao meu pricipal ");
	   					getch();
       					}
						else {
						checar_info(T, i, j);}
				        break;

				case 5: printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
				printf("\n   A receita total e de: ");
				if (T.receita <= 0) {
					printf("R$ 0,00\n");
				}
				else printf("R$ %d,00\n", T.receita);
				printf("\n   Pressione qualquer tecla para voltar ao menu principal ");
				        getch();
				        break;

				case 6:
						 printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
   						 printf("\t    CANCELAMENTOS");
   						 printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
				        i = linhaX();
						j = colunaY();
						if(i>F || j>C || i<0 || j<0)
     					{
       					printf("\n   Esta cadeira nao existe!!! \n\n   Pressione qualquer tecla para voltar ao meu pricipal ");
	   					getch();
       					}
						else {
						printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
						if(T.assento[i][j].status=='L') {
							printf("\n   Assento livre, portanto nao pode ser cancelado.\n");
							printf("\n   Pressione qualquer tecla para voltar ao menu principal ");
				        		getch();
                                break;
                                }
						else{
								int senha;
                                checar_info2(T, i, j);
								printf("\n   Digite a senha de seguranca para cancelar esse assento: ");
								scanf("%d", &senha);

								if (T.assento[i][j].senha != senha) {
									printf("\n   Senha incorreta, portanto nao pode ser cancelado.\n");
									printf("\n   Pressione qualquer tecla para voltar ao menu principal ");
									getch();
								}
								else {
								remover_pessoa(&T, i, j);
								printf("\n   Entrada cancelada com sucesso!!\n");
								printf("\n   Pressione qualquer tecla para voltar ao menu principal ");
				        		getch();
								}
							}
						}
				        break;

                /* case 7:
						printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
						printf("\n     LISTA E BUSCA DE INFORMACAO\n\n");
                        long int code;
						int m;
						insertionSortRG(V, n);
						for(i = 0; i < n; i++)
							printf("%d) %d\n", i, V[i].rg);
						
						for (m = 0; m < n; m++) {
							printf("\n   1- RG %d: \n", T.id[m]);
						}
						printf("\n   Digite o Registro Geral (RG): ");
                        scanf("%d", &code);
							printf("\n   Pressione qualquer tecla para voltar ao menu principal ");
							getch();
				        break; */

				case 7: printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
				printf("\n   Fechando a aplicacao, muito obrigado!\n\n");
				Gravar_teatro(T);
				        break;
			    default: printf("Escolha um numero de 1 a 7\n");
				         break;
			  }



  }while(op!=7);

return 0;
	           }