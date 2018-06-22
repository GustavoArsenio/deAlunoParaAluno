#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <unistd.h>

using namespace std;
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

int login(int log)
{


}
		  

int main ()
{
while(true){
 int interna, i, op;
    system("cls.");

//	login(log);
int	x=1;
if(x==1){
				menu:
  			  system("cls.");
  			  string nome = " LOCMOB ";
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
   			   printf("\t              \xBA         [2]- Listar            \xBA\n");
 			   printf("\t              \xBA         [3]- Locar             \xBA\n");
			   printf("\t              \xBA         [4]- Lgins             \xBA\n");
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
				 case 1 :{
		
				 		  system("cls.");
  			  string nome = " CASTRAR ";
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

  			   printf("\t              \xBA   [1]- Cadastrar Cliente       \xBA\n");
   			   printf("\t              \xBA   [2]- Cadastrar Equipamentos  \xBA\n");
 			   printf("\t              \xBA   [3]- Cadastrar Estoque       \xBA\n");
   			   printf("\t              \xBA   [0]- Sair                    \xBA");

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
	
			  case 1:
   				system("exit");
				system("start ./GravarCliente.exe");
				break;
    	    	 case 2 :
      		 	system("exit");
     				system("start ./GravarEquipamento.exe");
     	    	break;
        		 case 3 :
    	      		system("exit");
     				system("start ./GravarEstoque.exe");
	 			break;
  	 
   				default :
   				  	 printf ("Operacao invalida!\n");
   			   		goto menu;
			}

  }
}
}

}
}




