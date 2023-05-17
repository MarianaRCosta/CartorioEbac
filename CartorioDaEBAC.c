#include <stdio.h>   //biblioteca de comunica��o com o usu�rio
#include <stdlib.h>  //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h>  //biblioteca de aloca��o de texto por regi�o
#include <string.h>  //biblioteca respons�ve� por cuidar das strings.

int registro() //Fun��o respons�vel por cadastrar os usu�rios no sistema
{
	setlocale(LC_ALL, "Portuguese"); //Definindo linguagem
    printf("Voc� escolheu cadastrar nomes!\n"); 
    
	//�nicio da cria��o das vari�veis 		
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado:\n");//Coletando a informa��o do usu�rio
	scanf("%s", cpf);           //refere-se a string
	
	strcpy(arquivo,cpf);        //Respons�vel por copiar os valores das strings
	
	FILE *file;                 //Cria o arquivo    
	file = fopen(arquivo, "w"); //Cria o arquivo na pasta onde o sistema est� salvo e "w" � referente a write
	fprintf(file,cpf);          //Salvo o valor da vari�vel
	fclose(file);               //Fechar.
	
	file = fopen(arquivo,"a"); //Abre o arquivo na pasta onde o sistema est� salvo e "a" � referente a atualizar
	fprintf(file, ",");        //Coloca uma "," na vari�vel
	fclose(file);              //Fecha o arquivo
	
	
	
	printf("Digite o nome a ser cadastrado:\n"); //Coletar a informa��o do usu�rio
	scanf("%s", nome);         //refere-se a string
	
	file = fopen(arquivo,"a"); //Abre o arquivo na pasta onde o sistema est� salvo e "a" � referente a atualizar
	fprintf(file,nome);        //Salvo o valor da vari�vel
	fclose(file);              //Fecha o arquivo
	
	file = fopen(arquivo,"a"); //Abre o arquivo na pasta onde o sistema est� salvo e "a" � referente a atualizar
	fprintf(file, ",");        //Coloca uma "," na vari�vel
	fclose(file);              //Fecha o arquivo
	
	
	
	printf("Digite o sobrenome a ser cadastrado:\n");//Coletar a informa��o do usu�rio
	scanf("%s", sobrenome);    //refere-se a string
	
	file = fopen(arquivo,"a"); //Abre o arquivo na pasta onde o sistema est� salvo e "a" � referente a atualizar
	fprintf(file,sobrenome);   //Salvo o valor da vari�vel
	fclose(file);              //Fecha o arquivo
	
	file = fopen(arquivo,"a"); //Abre o arquivo na pasta onde o sistema est� salvo e "a" � referente a atualizar
	fprintf(file, ",");        //Coloca uma "," na vari�vel
	fclose(file);              //Fecha o arquivo
	
	
	
	printf("Digite o cargo a ser cadastrado:\n");//Coletar a informa��o do usu�rio
	scanf("%s", cargo);        //refere-se a string
	
	file = fopen(arquivo,"a"); //Abre o arquivo na pasta onde o sistema est� salvo e "a" � referente a atualizar
	fprintf(file,cargo);       //Salvo o valor da vari�vel
	fclose(file);              //Fecha o arquivo
		
	system("pause");           //Congela a tela para que ela n�o saia do local at� uma tecla ser precionada
	
	
}

int consulta()  //Fun��o respons�vel por cadastrar os usu�rios no sistema
{
	printf("Voc� escolheu consultar nomes.\n\n");
	
	setlocale(LC_ALL, "Portuguese"); //Definindo linguagem
	
	
	//�nicio da cria��o das vari�veis
	char cpf[40];
	char conteudo[200];
	
	
	
	printf("Digite o CPF a ser consultado:\n"); //Coletar a informa��o do usu�rio a ser consultado
	scanf("%s", cpf);         //refere-se a string
	
	FILE *file;               //Cria o arquivo 
	file = fopen(cpf,"r");    //Abre o arquivo na pasta onde o sistema est� salvo e "r" � referente a ler
	
	if(file == NULL)          //Condi��o se o valor n�o for encontrado
	{
		printf("N�o foi poss�vel encontrar o arquivo solicitado, pois o CPF n�o foi localizado.\n");
	    printf("Por favor, tente novamente.\n\n");  
	}
	
	while(fgets(conteudo, 200, file) != NULL)  //Condi��o caso o usu�rio seja encontrado
	{
		printf("\nEssas s�o as informa��es do usu�rio:");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	
	system("pause");          //Congela a tela para que ela n�o saia do local at� uma tecla ser precionada
}



int deletar()//Fun��o respons�vel por deletar os usu�rios no sistema
{
	printf("Voc� escolheu deletar nomes.\n");
	setlocale(LC_ALL, "Portuguese"); //Definindo linguagem
	
	
	//Vari�veis
	char cpf[40];
	
	
	printf("Digite o CPF do usu�rio a ser deletado:"); //Coletar a informa��o do usu�rio a ser deletado
	scanf("%s",cpf);         //refere-se a string
	
	remove(cpf);             //Remove a vari�vel do sistema
	
	FILE*file;               //Cria o arquivo
	file = fopen(cpf,"r");   //Abre o arquivo na pasta onde o sistema est� salvo e "r" � referente a ler
	
	if(file == NULL)         //Condi��o caso o usu�rio n�o seja encontrado.
	{
		printf("O usu�rio n�o se encontra no sistema!\n");
	}
	
	if(file != NULL)         //Condi��o caso o usu�rio seja encontrado e deletado
	{
		printf("\nEsse usu�rio foi deletado.");
		printf("\n");
	}
	
	
	system("pause");          //Congela a tela para que ela n�o saia do local at� uma tecla ser precionada
}


int main()

{
    //vari�veis
	int opcao=0;
	int laco=1;
	
	for(laco=1;laco=1;)
	{
		system("cls"); // respons�vel por limpar a tela
		
	    setlocale(LC_ALL, "Portuguese"); //Definindo linguagem
	
	//Inicio do Menu
	    printf("### Cart�rio da EBAC ###\n\n");
  	    printf("Escolha a op��o desejada do menu:\n\n");
	
	    printf("\t1-  Registrar nomes\n");
	    printf("\t2-  Consultar nomes\n");
	    printf("\t3-  Deletar nomes\n");
	    printf("\t4-  Sair do sistema\n\n")
	
	    ;printf("Esse Software � de livre uso dos alunos.\n\n"); 
	
	    printf("Escolha a op��o:");//Fim do menu
	
	//Armazenando as escolhas do us�ario
	    scanf("%d", &opcao); 
	
	    system("cls");// respons�vel por limpar a tela
	
	//Inicio da sele��o do menu
	
	    
	    switch(opcao)
	    {
	    	case 1:
	    	registro(); //chamada de fun��es
		    break;
		    
		    case 2:
		    consulta();//chamada de fun��es
		    break;
		    
		    case 3:
		    deletar();//chamada de fun��es
		    break;
		    
		    case 4:
		    printf("\n\nObrigado por utilizar o sistema!\n\n");
		    return 0;
		    break;
		    
		    ;default: //Fun��o para caso nenhum dos cases seja selecionado
		    printf("Essa op��o n�o est� dispon�vel.\n");
		    system("pause");
		    break;
		    	
		}
	    
	   
	//Fim da sele��o
    }
}
