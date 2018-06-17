#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <dos.h>
#include <unistd.h>
#include <windows.h>
#include <conio.h>
#include "conio.c"
using namespace std;

bool procurapalavra(FILE *arquivo, int quero, char *palavra)
//Busca tudo que tem na linha nº"quero" no txt e grava na variavel palavra 
{
   int proc = ftell(arquivo);
   fseek(arquivo, 0, SEEK_SET);

   while( --quero && (fgets(palavra,100, arquivo) != NULL) );
   if(!quero)
fgets(palavra,20, arquivo);
   fseek(arquivo, proc, SEEK_SET);
  return !quero; 
}
void gravatxt(char *XNome,char *Caminho)//grava dentro do txt o nome da nova categoria
{

FILE *arquivo;
		 arquivo = fopen (Caminho, "a+");
	  fprintf(arquivo, "%s                                                               \n",XNome);
fclose(arquivo);

}
int main()
{
	inicio:
	char alternativa,Caminho[50],txt[20],palavra[100],Cod[10],Nitem[20],Nmarca[20],XNome[20];

	int x,i;
	FILE *arquivo;
	int quero;
	  unsigned short Tmp;   
   unsigned short Porcentagem = 0;   
    unsigned short cont = 0;  
    
	n:
	textcolor(2);printf("Digite o COD do novo equipamento:\n");	textcolor(7);
	scanf("%s",&Cod);
	sprintf(Caminho, ".\\Arquivos\\Cod\\CODs.txt");//caminho onde procurar a palavra
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
	
							i=0;//conta os caracteres
					while (Cod[i] != ' ') {
						i++;
					}
					char SemEspaco[i]; // tira o espaço
					memcpy( SemEspaco, Cod, i); 
					SemEspaco[i] = '\0'; 
					strcpy(Cod,SemEspaco);

ITENS:
		textcolor(2);printf("\n Escolha qual Tipo do Item  : \n");textcolor(7);
			i=1	;

				sprintf(Caminho, ".\\Arquivos\\Item\\Itens.txt");
		 		arquivo = fopen (Caminho, "r+"); 
		 		textcolor(10);	printf("1");	textcolor(7);
		 		printf(" Adicionar Outro Tipo\n");
			while((fscanf(arquivo,"%s", &txt))!=EOF){	//contador para exibir o menu de Itens
				i++;
	 			textcolor(10);
				printf("%d ",i);textcolor(7);
				printf("%s\n",txt);		
								 
	    	} 
		scanf("%d",&quero);
		
		
		if(quero== 1){// adicionar NOVA
			printf("Digite o nome do novo ITEM :  ");		
       		scanf("%s",&palavra);
     		arquivo = fopen (Caminho, "r+");
					while((fscanf(arquivo,"%s", &txt))!=EOF){ //verifica se o novo nome ja nao existe na lista
						printf("%s - %s",txt,palavra);
            			x=strcmp(txt,palavra); 
							if(x==0 ){
									textcolor(12);printf("\n Ja Cadastrado \n");
									fclose(arquivo);
									goto ITENS;
							}	
					}
				
			strcpy(XNome,palavra);
			strcpy(Nitem,palavra);
			gravatxt(XNome,Caminho);//grava dentro do txt com  Caminho
			goto ITENS;		
		} 
		else{
		
			quero=quero-1;
			sprintf(Caminho, ".\\Arquivos\\Item\\Itens.txt");//caminho onde procurar a palavra
			arquivo = fopen (Caminho, "r+");
			procurapalavra(arquivo,quero,palavra);
					strcpy(Nitem,palavra);
			
			fclose(arquivo); 
		}
		
							i=0;//conta os caracteres
					while (Nitem[i] != ' ') {
						i++;
					}
					char SemEspaco2[i]; // tira o espaço
					memcpy( SemEspaco2, Nitem, i); 
					SemEspaco2[i] = '\0'; 
					strcpy(Nitem,SemEspaco2);
	
		
		
		
MARCAS:
		textcolor(2);printf("\n Escolha qual a MARCA do Item  : \n");textcolor(7);
			i=1	;

				sprintf(Caminho, ".\\Arquivos\\Marca\\Marcas.txt");
		 		arquivo = fopen (Caminho, "r+"); 
		 		textcolor(10);	printf("1");	textcolor(7);
		 		printf(" Adicionar Outra MARCA\n");
			while((fscanf(arquivo,"%s", &txt))!=EOF){	//contador para exibir o menu de Itens
				i++;
	 			textcolor(10);
				printf("%d ",i);textcolor(7);
				printf("%s\n",txt);		
								 
	    	} 
		scanf("%d",&quero);
	
		if(quero== 1){// adicionar NOVA
			printf("Digite o nome da nova MARCA :  ");		
       		scanf("%s",&palavra);
     		arquivo = fopen (Caminho, "r+");
					while((fscanf(arquivo,"%s", &txt))!=EOF){ //verifica se o novo nome ja nao existe na lista

            			x=strcmp(txt,palavra); 
							if(x==0 ){
									textcolor(12);printf("\n Ja Cadastrado \n");
									fclose(arquivo);
									goto MARCAS;
							}	
					}
				
			strcpy(XNome,palavra);
			strcpy(Nitem,palavra);
			gravatxt(XNome,Caminho);//grava dentro do txt com  Caminho
			goto ITENS;		
		} 
	
		quero=quero-1;
		sprintf(Caminho, ".\\Arquivos\\Marca\\Marcas.txt");//caminho onde procurar a palavra
		arquivo = fopen (Caminho, "r+");
		procurapalavra(arquivo,quero,palavra);
		fclose(arquivo); 
		strcpy(Nmarca,palavra);
								i=0;//conta os caracteres
					while (Nmarca[i] != ' ') {
						i++;
					}
					char SemEspaco3[i]; // tira o espaço
					memcpy( SemEspaco3,Nmarca, i); 
					SemEspaco3[i] = '\0'; 
					strcpy(Nmarca,SemEspaco3);

 printf("\n Concluir Cadastro do Equipamento ? s/n ");
        	cin >> alternativa;
    if (alternativa == 's' || alternativa == 'S')//Verifica se quer ou nao cadastrar uma categoria
            {	
            				// Verifica tuto


				FILE *arquivo;
				sprintf(Caminho, ".\\arquivos\\Item\\%s.txt",Nitem);
 				arquivo = fopen (Caminho, "r+");
  					 while((fscanf(arquivo,"%s", &txt))!=EOF){ //verifica se o novo nome ja nao existe na lista
  		
  						 x=strcmp(txt,Nmarca); 
  	
  					 		if(x==0 ){
								textcolor(12);printf("\n Ja Cadastrado \n");
								fclose(arquivo);
 								goto inicio;
					      	}
   					  }
            
    
				sprintf(Caminho, ".\\arquivos\\Marca\\%s.txt",Nitem);
 				arquivo = fopen (Caminho, "r+");
  					 while((fscanf(arquivo,"%s", &txt))!=EOF){ //verifica se o novo nome ja nao existe na lista
  	
  						 x=strcmp(txt,Nmarca); 
  					 		if(x==0 ){
								textcolor(12);printf("\n Ja Cadastrado \n");
								fclose(arquivo);
 								goto inicio;
					      	}
   					  }
            
            
							//Grava tuto
						
							sprintf(Caminho, ".\\arquivos\\Item\\%s.txt",Nitem);	//grava um txt com o nome do item e as marcas deste item dentro
							arquivo = fopen (Caminho, "a+");
							fprintf(arquivo, "%s\n",Cod);
							fprintf(arquivo, "%s\n",Nmarca);
							
							fclose(arquivo);
							
							sprintf(Caminho, ".\\arquivos\\Marca\\%s.txt",Nmarca); //grava um txt com o nome da marcas e os itens dentro desta maraca dentro
							arquivo = fopen (Caminho, "a+");
							fprintf(arquivo, "%s\n",Cod);
							fprintf(arquivo, "%s\n",Nitem);
							fclose(arquivo);
							
							sprintf(Caminho, ".\\Arquivos\\Cod\\CODs.txt",Cod);//grava dentro do txt CODs o novo CODs
							arquivo = fopen (Caminho, "a+");
							fprintf(arquivo, "%s\n",Cod);
							fclose(arquivo);
							sprintf(Caminho, ".\\Arquivos\\Cod\\%s.txt",Cod); //grava um txt com o nome do COD com o nome da marca e do item deste DOD dentro
							arquivo = fopen (Caminho, "a+");
							fprintf(arquivo, "%s\n",Nitem);
							fprintf(arquivo, "%s\n",Nmarca);
							fclose(arquivo);

}

 if (alternativa == 'n' || alternativa == 'N')//Verifica se quer ou nao cadastrar uma categoria
            {
	printf("ok");							 	
		}
						
		
			
}

