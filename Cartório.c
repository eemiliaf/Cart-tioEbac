#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int registro() // fun��o responsavel por cadastrar os ususarios
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado: ");
	scanf("%s" , cpf); 
	
	strcpy(arquivo, cpf); // Responsavel por copiar os valores das string 
	
	FILE *file; //  cria o arquivo 
	file = fopen(arquivo, "w"); //  cria o arquivo 
	fprintf(file,cpf); // salva 0 valor da variavel 
	fclose(file); // fecha o arquivo 
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo); 
	fclose(file);
	
	system("pause");
	
}
	
int consulta()
{
	setlocale(LC_ALL, "Portuguese"); 
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf("N�o foi possivel abrir o arquivo, n�o localizado!.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
int deletar()
{
	char cpf [40];
	
	printf("Digite o CPF a ser deletado: ");
	scanf("%s", cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("O usu�rio n�o se encontra no sistema!.\n");
		system("pause");
	}
}

int sair()
{
	printf("Voc� escolheu a opcao sair!\n");
	system("pause");
}



int main ()
    {
	int opcao=0; // Definindo variaveis
	int laco=1;
	   
	for(laco=1;laco=1;)
	{
	
	       system("cls");
	   
           setlocale(LC_ALL, "Portuguese");
        
           printf("### Cart�rio da Ebac ###\n\n");
           printf("Menu Principal:\n\n");
           printf("\t1 - Incluir usu�rio\n");
           printf("\t2 - Consultar usu�rio\n");
           printf("\t3 - Deletar usu�rio\n");
           printf("\t4. Sair\n\n");
           printf("Op��o:");
       
	       printf("Esse softare � de uso livre somente para alunos Ebac\n");
	       
	       scanf("%d" , &opcao); // armazenando a escolha do usuario 
	       
	       system("cls");
	       
	       switch(opcao) // inicio da sele��o do menu 
	       {
	       	 
				case 1:
	       	    registro(); // chamada de fun��es 
		   	    break;
		   	  
		   	    case 2:
		   	    consulta();
		   	    break;
		   	
		   	    case 3:
		   	    deletar();
		   	    break;
		   	 
		   	    case 4:
		   	    sair();
		   	    break;
		   	 
		   	    default: 
		   	    printf("Essa op��o n�o esta dispon�vel!\n");
		   	    system("pause");
		   	    break;
		   	} // fim da sele��o 
   	
	   }
}
    
	

	       
	       

        
        
        

        






