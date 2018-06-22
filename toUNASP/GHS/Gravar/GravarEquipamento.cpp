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
		char Nome[50],Rg1[12],Cod[10],Cpf1[13],Endereco[50];
		char alternativa,Caminhos[50],txt[20],palavra[100],Nitem[20],Nmarca[20],End[20];
FILE *arquivo;
FILE *arquivoEqui;       
    char Cpf[] = "Cpf:"; 
         char Rg[] = "Rg:"; 
	int x,e,i,iN;
		char Caminho[50],CodEqui[10],XNome[20];

	int quero;
	  unsigned short Tmp;   
   unsigned short Porcentagem = 0;   
    unsigned short cont = 0;  
	
	char SemEspaco[i]; 
	
	
	
		system("cls");
	
	inicio:

	m:
	textcolor(2);printf("Digite o Cod do novo equipamento:\n");	textcolor(7);
	scanf("%s",&CodEqui);
	sprintf(Caminho, ".\\Arquivos\\Equipamentos\\Cod\\CODs.txt");//caminho onde procurar a palavra
arquivoEqui = fopen (Caminho, "r+");

		while((fscanf(arquivoEqui,"%s", &txt))!=EOF){ //verifica se a palavra ja ta no txt
						i=strcmp(txt,CodEqui); 

					 if(i==0){//se ja tiver
							textcolor(12);printf("\n %s Ja Cadastrado\n",CodEqui);textcolor(7);
							fclose(arquivoEqui);
							goto m;
					}
		}
		fclose(arquivoEqui);
printf("%s - OK",CodEqui);
ITENS:
		textcolor(2);printf("\n Escolha qual Tipo do Item  : \n");textcolor(7);
			i=1	;


				sprintf(Caminho, ".\\arquivos\\Equipamentos\\Item\\Itens.txt");
		 		arquivoEqui = fopen (Caminho, "r+"); 
		 		textcolor(10);printf("1");textcolor(7);
		 		printf(" Adicionar Outro Tipo\n");
			while((fscanf(arquivoEqui,"%s", &txt))!=EOF){	//contador para exibir o menu de Itens
				i++;
	 			textcolor(10);
				printf("%d ",i);textcolor(7);
				printf("%s\n",txt);		
								 
	    	} 
		scanf("%d",&quero);
		
		
		if(quero== 1){// adicionar NOVA
			printf("Digite o nome do novo ITEM :  ");		
       		scanf("%s",&palavra);
     		arquivoEqui = fopen (Caminho, "r+");
					while((fscanf(arquivoEqui,"%s", &txt))!=EOF){ //verifica se o novo nome ja nao existe na lista
						printf("%s - %s",txt,palavra);
            			x=strcmp(txt,palavra); 
							if(x==0 ){
									textcolor(12);printf("\n Ja Cadastrado \n");
									fclose(arquivoEqui);
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
			sprintf(Caminho, ".\\Arquivos\\Equipamentos\\Item\\Itens.txt");//caminho onde procurar a palavra
			arquivoEqui = fopen (Caminho, "r+");
			procurapalavra(arquivoEqui,quero,palavra);
					strcpy(Nitem,palavra);
			
			fclose(arquivoEqui); 
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

				sprintf(Caminho, ".\\Arquivos\\Equipamentos\\Marca\\Marcas.txt");
		 		arquivoEqui = fopen (Caminho, "r+"); 
		 		textcolor(10);	printf("1");	textcolor(7);
		 		printf(" Adicionar Outra MARCA\n");
			while((fscanf(arquivoEqui,"%s", &txt))!=EOF){	//contador para exibir o menu de Itens
				i++;
	 			textcolor(10);
				printf("%d ",i);textcolor(7);
				printf("%s\n",txt);		
								 
	    	} 
		scanf("%d",&quero);
	
		if(quero== 1){// adicionar NOVA
			printf("Digite o nome da nova MARCA :  ");		
       		scanf("%s",&palavra);
     		arquivoEqui = fopen (Caminho, "r+");
					while((fscanf(arquivoEqui,"%s", &txt))!=EOF){ //verifica se o novo nome ja nao existe na lista

            			x=strcmp(txt,palavra); 
							if(x==0 ){
									textcolor(12);printf("\n Ja Cadastrado \n");
									fclose(arquivoEqui);
									goto MARCAS;
							}	
					}
				
			strcpy(XNome,palavra);
			strcpy(Nitem,palavra);
			gravatxt(XNome,Caminho);//grava dentro do txt com  Caminho
			goto ITENS;		
		} 
	
		quero=quero-1;
		sprintf(Caminho, ".\\Arquivos\\Equipamentos\\Marca\\Marcas.txt");//caminho onde procurar a palavra
		arquivoEqui = fopen (Caminho, "r+");
		procurapalavra(arquivoEqui,quero,palavra);
		fclose(arquivoEqui); 
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


				FILE *arquivoEqui;
				sprintf(Caminho, ".\\arquivoEquis\\Equipamentos\\Item\\%s.txt",Nitem);
 				arquivoEqui = fopen (Caminho, "r+");
  					 while((fscanf(arquivoEqui,"%s", &txt))!=EOF){ //verifica se o novo nome ja nao existe na lista
  		
  						 x=strcmp(txt,Nmarca); 
  	
  					 		if(x==0 ){
								textcolor(12);printf("\n Ja Cadastrado \n");
								fclose(arquivoEqui);
 								goto inicio;
					      	}
   					  }
            
    
				sprintf(Caminho, ".\\arquivos\\Equipamentos\\Marca\\%s.txt",Nitem);
 				arquivoEqui = fopen (Caminho, "r+");
  					 while((fscanf(arquivoEqui,"%s", &txt))!=EOF){ //verifica se o novo nome ja nao existe na lista
  	
  						 x=strcmp(txt,Nmarca); 
  					 		if(x==0 ){
								textcolor(12);printf("\n Ja Cadastrado \n");
								fclose(arquivoEqui);
 								goto inicio;
					      	}
   					  }
            
            
							//Grava tuto
						
							sprintf(Caminho, ".\\arquivos\\Equipamentos\\Item\\%s.txt",Nitem);	//grava um txt com o nome do item e as marcas deste item dentro
							arquivoEqui = fopen (Caminho, "a+");
							fprintf(arquivoEqui, "%s\n",CodEqui);
							fprintf(arquivoEqui, "%s\n",Nmarca);
							
							fclose(arquivoEqui);
							
							sprintf(Caminho, ".\\arquivos\\Equipamentos\\Marca\\%s.txt",Nmarca); //grava um txt com o nome da marcas e os itens dentro desta maraca dentro
							arquivoEqui = fopen (Caminho, "a+");
							fprintf(arquivoEqui, "%s\n",CodEqui);
							fprintf(arquivoEqui, "%s\n",Nitem);
							fclose(arquivoEqui);
							
							sprintf(Caminho, ".\\Arquivos\\Equipamentos\\Cod\\CODs.txt",CodEqui);//grava dentro do txt CodEquis o novo CodEquis
							arquivoEqui = fopen (Caminho, "a+");
							fprintf(arquivoEqui, "\n %s \n",CodEqui);
							fclose(arquivoEqui);
							sprintf(Caminho, ".\\Arquivos\\Equipamentos\\Cod\\%s.txt",CodEqui); //grava um txt com o nome do COD com o nome da marca e do item deste DOD dentro
							arquivoEqui = fopen (Caminho, "a+");
							fprintf(arquivoEqui, "%s\n",Nitem);
							fprintf(arquivoEqui, "%s\n",Nmarca);
							fclose(arquivoEqui);

}
else//Verifica se quer ou nao cadastrar uma categoria
            {
	printf("ok");
			 	
		}
}

