#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <dos.h>
#include <unistd.h>
#include <windows.h>
#include <conio.h>
#include "conio.c"
using namespace std;

int main()
{
		char Nome[50],Rg1[12],Cod[10],Cpf1[13],Endereco[50];
		char alternativa,Caminho[50],txt[20],palavra[100],Nitem[20],Nmarca[20],End[20];
FILE *arquivo;               char Rg[] = "Rg:"; 
	int x,i,iN;
n:
      	    		  printf("Digite o COD do novo cliente:\n ");
                      scanf("%s", &Cod);
					  sprintf(Caminho, ".\\Arquivos\\Clientes\\Cod\\CODs.txt");//caminho onde procurar a palavra
					  arquivo = fopen (Caminho, "r+");

		while((fscanf(arquivo,"%s", &txt))!=EOF){ //verifica se a palavra ja ta no txt
						i=strcmp(txt,Cod); 

					 if(i==0){//se ja tiver
							textcolor(12);printf("\n Ja Cadastrado\n");textcolor(7);
							fclose(arquivo);
							goto n;
					}
		}
		fclose(arquivo); 
	
nome:
			   		  printf("Digite o NOME Completo do cliente:\n");
                      setbuf(stdin, NULL);
                      gets(Nome);
			   	iN=0;//conta os caracteres
					while (Nome[iN] != '\0') {//conta quantas letras tem o nome novo 
						iN++;
					}
					printf("\n%d iN \n",iN);

					iN=iN+1; 
					if(iN<10){	textcolor(12);printf("\n Nome Incompleto \n",iN);textcolor(7);
					goto nome;}//para evita nomes com apenas o começo igual seja pego na verificaçao
				
                      sprintf(Caminho, ".\\Arquivos\\Clientes\\Dados\\Nomes.txt");//caminho onde procurar a palavra
					  arquivo = fopen (Caminho, "r+");

		while(fgets(txt,iN, arquivo) != NULL){ // pega o mesmo numero de letras do novo nome das primeiras linhas
					
					printf("\n%s||txt \n",txt);
					printf("\n%s||Nome \n",Nome);			   	
						x=strcmp(txt,Nome); //compara os ex: 16 caracteres do novo nome com os 16 cracteres das primeiras linhas do txt

					 if(x==0){//se ja tiver
					 
							textcolor(12);printf("\n     AVISO \n NOME Ja Cadastrado \n");textcolor(7);
							fclose(arquivo);
							
							printf("\n     Verificar se o RG e o mesmo ? s/n \n");
							cin>>alternativa;
							if (alternativa == 's' || alternativa == 'S')//Verifica se quer ou nao cadastrar uma categoria
          					  {		
            							rg1:
										 printf("\nDigite o RG do cliente:\n");
                  					     scanf("%s", &Rg1);
                      					 char Rg[] = "Rg:"; 
                      					 strcat(Rg,Rg1);
                     				     i=0;//conta os caracteres
										while ((Rg[i] != '\0')!=NULL) {
											i++;
											}

										if (i != 12 && i!= 13 ){
											textcolor(12);printf("RG INVALIDO");textcolor(7);
											goto rg1;
											}
										else{
						 					sprintf(Caminho, ".\\Arquivos\\Clientes\\Dados\\RG_Cpf.txt");//caminho onde procurar a palavra
					  						arquivo = fopen (Caminho, "r+");
					  							while(fgets(txt,13, arquivo) != NULL){ // pega o mesmo numero de letras do novo nome das primeiras linhas				 		
													x=strcmp(txt,Rg);
												if(x==0){//se ja tiver
							 
							 						textcolor(12);printf("RG Ja Existente");textcolor(7);
							 						textcolor(3);printf("\nEste Cliente ja esta cadastrado consulte a LISTA de clientes\n");textcolor(7);
							 						system("pause");
							 						goto n;
							 					}
												  }
											textcolor(5);printf("RG Ainda Nao Cadastro \n ");textcolor(7);
						
											textcolor(10);printf("Siga com o Cadastro\n ");textcolor(7);
											system("pause");
											goto cpf1;		
										}				
								}
							else {
							goto n;
							}
					}
		}
		fclose(arquivo); 
	goto rg1;
	cpf1:
    printf("Digite o CPF do cliente:\n");
    scanf("%s", &Cpf1);
    char Cpf[] = "Cpf:"; 
    strcat(Cpf,Cpf1);
    i=0;//conta os caracteres
		while ((Cpf[i] != '\0')!=NULL) {
			i++;
		}
		
		if (i != 15 ){
			textcolor(12);printf("	CPF INVALIDO");textcolor(7);
			goto cpf1;
		}
		else{
			sprintf(Caminho, ".\\Arquivos\\Clientes\\Dados\\RG_Cpf.txt");//caminho onde procurar a palavra
			arquivo = fopen (Caminho, "r+");
	  
				while(fgets(txt,16, arquivo) != NULL){ // pega o mesmo numero de letras do novo nome das primeiras linhas
					//conta os caracteres
					x=strcmp(txt,Cpf);
					if(x==0){//se ja tiver
							 
						textcolor(12);printf("Cpf Ja Existente");textcolor(7);
						textcolor(3);printf("\nEste Cliente ja esta cadastrado consulte a LISTA de clientes\n");textcolor(7);
						system("pause");
						goto n;
							 }
				}
					textcolor(5);printf("CPF Ainda Nao Cadastro \n ");textcolor(7);
					textcolor(10);printf("Siga com o Cadastro\n ");textcolor(7);
					system("pause");		
		}
		
    printf("Digite o Endereco do cliente:\n");
    	setbuf(stdin, NULL);
    	gets(End);
   	printf("\n Concluir Cadastro do Equipamento ? s/n ");
    	cin >> alternativa;
    if (alternativa == 's' || alternativa == 'S')//Verifica se quer ou nao cadastrar uma categoria
            {
			   
            
            
							//Grava tuto
						
							sprintf(Caminho, ".\\arquivos\\Clientes\\Tudo\\%s.txt",Nome);	//grava um txt com o nome do item e as marcas deste item dentro
							arquivo = fopen (Caminho, "a+");
							fprintf(arquivo, "%s\n",Cod);
							fprintf(arquivo, "%s\n",Cpf);
							fprintf(arquivo, "%s\n",Rg);
							fprintf(arquivo, "%s\n",Cpf);
							
							fclose(arquivo);
							
							sprintf(Caminho, ".\\arquivos\\Clientes\\RG_Cpf.txt"); //grava um txt com o nome da marcas e os itens dentro desta maraca dentro
							arquivo = fopen (Caminho, "a+");
							fprintf(arquivo, "%s\n",Rg);
							fprintf(arquivo, "%s\n",Cpf);
							fclose(arquivo);
							
							sprintf(Caminho, ".\\Arquivos\\Clientes\\Cod\\CODs.txt",Cod);//grava dentro do txt CODs o novo CODs
							arquivo = fopen (Caminho, "a+");
							fprintf(arquivo, "%s\n",Cod);
							fclose(arquivo);
							sprintf(Caminho, ".\\Arquivos\\Clientes\\Cod\\%s.txt",Cod); //grava um txt com o nome do COD com o nome da marca e do item deste DOD dentro
							arquivo = fopen (Caminho, "a+");
							fprintf(arquivo, "%s\n",Nome);
							fprintf(arquivo, "%s\n",Cpf);
							fprintf(arquivo, "%s\n",Rg);
							fprintf(arquivo, "%s\n",Cpf);
							fclose(arquivo);

                      
                      
                      
          }
     else{
     	
     }     
}



