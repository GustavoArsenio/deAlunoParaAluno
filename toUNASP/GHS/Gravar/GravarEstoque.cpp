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
		char Nome[50],Rg1[12],Cod[10],Valor[13],Endereco[50];
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
	textcolor(2);printf("Digite o Cod do equipamento:\n");	textcolor(7);
	scanf("%s",&CodEqui);
	sprintf(Caminho, ".\\arquivos\\Equipamentos\\Cod\\CODs.txt");//caminho onde procurar a palavra
arquivoEqui = fopen (Caminho, "r+");

		while((fscanf(arquivoEqui,"%s", &txt))!=EOF){ //verifica se a palavra ja ta no txt
						i=strcmp(txt,CodEqui); 

					 if(i==0){//se tiver
						textcolor(13);printf(" Existente o Cod %s pertence e do seguinte equipamento : \n",CodEqui);textcolor(7);
						
				sprintf(Caminho, ".\\arquivos\\Equipamentos\\Cod\\%s.txt",CodEqui);
				printf("%s",CodEqui);
		 		arquivoEqui = fopen (Caminho, "r+"); 
			while((fscanf(arquivoEqui,"%s", &txt))!=EOF){	//contador para exibir o menu de Itens
				textcolor(3);	printf("%s\n",txt);	textcolor(7);	textcolor(10);
}
							fclose(arquivoEqui);
		}
		fclose(arquivoEqui);
		
textcolor(10); printf("\n Esse equipamento mesmo  ? s/n ");	textcolor(7);
        	cin >> alternativa;
    if (alternativa == 's' || alternativa == 'S')//Verifica se quer ou nao cadastrar uma categoria
{
	textcolor(2);printf("Digite o Valor do aluguel por Dia : \n");	textcolor(7);
		scanf("%s",&Valor);
		
	FILE * arqEst;
	char x[2]={'\0','\0'};
	FILE * arq;
	 arq = fopen(Caminho,"r");
    arqEst = fopen(".\\arquivos\\Estoque\\Estoque.txt","w");
    while( (x[0] = fgetc(arq))!= EOF){
        fputc(x[0],arqEst);
    }
    fclose(arq);
    fclose(arqEst);
    
   	sprintf(Caminhos, ".\\arquivos\\Estoque\\Estoque.txt");	//grava um txt com o nome do item e as marcas deste item dentro
							arquivo = fopen (Caminhos, "a+");
							fprintf(arquivo, "Valor R$ %s\n",Valor);
			    fclose(arquivo);
			    
		sprintf(Caminhos, ".\\arquivos\\Estoque\\%s.txt",CodEqui);	
			arquivo = fopen (Caminhos, "a+");
			fprintf(arquivo, "%s\n",Valor);
			    fclose(arquivo);  
}
else{
goto m;
}
}


}
