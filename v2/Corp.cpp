#include <iostream>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "login.h"
using namespace std;
int unsigned linhaIgnorar;

int moudura(string nome){


    int largura = 75;
    int cont = 0;
    int interna, i;
    while (nome[cont] != 0)
    {
        cont++;
    }

    largura = largura - cont;

    if (largura % 2 != 0) //Largura par
    {
        largura--;
    }

    interna = largura + cont + 2;
    system("cls");
    printf("\n\n");
    printf("\n\xC9"); //Canto superior esquerdo

    for (i = 1; i <= interna; i++)
    {
        printf("\xCD"); //Linha horizontal
    }

    printf("\xBB"); //Canto superior direito

    printf("\n\xBA"); //Linha vertical

    for (i = 1; i <= interna; i++)
    {
        printf(" ");
    }

    printf("\xBA"); //Linha vertical

    printf("\n\xBA"); //Linha vertical

    for (i = 1; i <= largura / 2; i++)
    {
        printf("*");
    }

    cout << "*" << nome << "*";

    for (i = 1; i <= largura / 2; i++)
    {
        printf("*");
    }

    printf("\xBA"); //Linha vertical

    printf("\n\xBA"); //Linha vertical

    for (i = 1; i <= interna; i++)
    {
        printf(" ");
    }

    printf("\xBA");   //Linha vertical
    printf("\n\xC8"); //Canto inferior esquerdo
    for (i = 1; i <= interna; i++)
    {
        printf("\xCD"); //Linha horizontal
    }

    printf("\xBC"); //Canto inferior esquerdo
    printf("\n\n");
}

int login(int TipoLog)
{
    int cadLogin(FILE *arquivoLogin);
    int montarLogin();
    int showLog(FILE * arq);
    int excluir(int linha, FILE * arg);
    int valido;

		     printf("\t\t\t *** Login *** \n");
    cadLogin(fopen("./toLogin.txt","w"));//login
    montarLogin();//retorna o login valido ou n 

	printf("\t\t\t *** Login *** \n");
    cadLogin(fopen("./toLogin.txt","w"));//login
    valido=(montarLogin());//retorna o login valido ou n 
	printf("\n \n \n %d",valido);
}
	
		  

int main ()
{


 int interna, i, op,TipoLog;
	float div,r;
	
	login(TipoLog);
	
	
	
switch(TipoLog){
	case 1:
				menu:
  			  system("cls.");
  			  string nome = " LOCMOB  ADMINISTRADOR ";
  			  moudura(nome);

    //-----------------------------------------------------------------------------------------------------------------------------------------------------

   			 printf("\n\t                            Painel");
   			 printf("\n \t              \xC9"); //Canto superior esquerdo
   			 for (i = 1; i <= 32; i++)
   			 {
   		    printf("\xCD"); //Linha horizontal
   			 }
   			 printf("\xBB"); //Canto superior direito

    	    	printf("\n \t              \xBA"); //vertical
    	    	for (i = 1; i <= 32; i++)
    		{
            	printf(" "); //espa�o em branco meio
   				 }
    		   printf("\xBA \n"); //vertical

  			   printf("\t              \xBA         [1]- Cadastrar         \xBA\n");
   			   printf("\t              \xBA         [2]- Buscar            \xBA\n");
 			   printf("\t              \xBA         [3]- Locar             \xBA\n");
 			   printf("\t              \xBA         [4]- Devolver          \xBA\n");
   			   printf("\t              \xBA         [0]- Sair              \xBA");

   			 printf("\n \t              \xBA"); //vertical
   		 for (i = 1; i <= 32; i++)
    	{
    	    printf(" "); //espa�o em branco meio
   		 }
   			 printf("\xBA \n");              //vertical
  			  printf("\t              \xC8"); //Canto inf esquerdo
    	for (i = 1; i <= 32; i++)
   		 {
       		 printf("\xCD"); //Linha horizontal
   		 }
   			 printf("\xBC"); //Canto inf direito

   			 printf("\n Escolha uma das operacoes : ");
    		scanf("%d", &op);
    
  		switch (op)
 			 {
				 case 1 :
   				system("exit");
				system("start Cadastrar.exe");
				break;
    	    	 case 2 :
      		 	system("exit");
     			system("start Buscar.exe");
     	    	break;
        		 case 3 :
    		  	system("exit");
     			system("start Locar.exe");

	 			break;
 
     			case 4 :
     		 	system("exit");
		     	system("start Devolver.exe");
				 break;
    			case 0:
    			system("exit");

  		       	 break;
  	 
   				default :
   				  	 printf ("Operacao invalida!\n");
   			   		goto menu;
			}
			
		break;
	
	
				
	
  }


system("cls.");
}

