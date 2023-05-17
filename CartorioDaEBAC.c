#include <stdio.h>   //biblioteca de comunicação com o usuário
#include <stdlib.h>  //biblioteca de alocação de espaço em memória
#include <locale.h>  //biblioteca de alocação de texto por região
#include <string.h>  //biblioteca responsáveç por cuidar das strings.

int registro() //Função responsável por cadastrar os usuários no sistema
{
	setlocale(LC_ALL, "Portuguese"); //Definindo linguagem
    printf("Você escolheu cadastrar nomes!\n"); 
    
	//ínicio da criação das variáveis 		
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado:\n");//Coletando a informação do usuário
	scanf("%s", cpf);           //refere-se a string
	
	strcpy(arquivo,cpf);        //Responsável por copiar os valores das strings
	
	FILE *file;                 //Cria o arquivo    
	file = fopen(arquivo, "w"); //Cria o arquivo na pasta onde o sistema está salvo e "w" é referente a write
	fprintf(file,cpf);          //Salvo o valor da variável
	fclose(file);               //Fechar.
	
	file = fopen(arquivo,"a"); //Abre o arquivo na pasta onde o sistema está salvo e "a" é referente a atualizar
	fprintf(file, ",");        //Coloca uma "," na variável
	fclose(file);              //Fecha o arquivo
	
	
	
	printf("Digite o nome a ser cadastrado:\n"); //Coletar a informação do usuário
	scanf("%s", nome);         //refere-se a string
	
	file = fopen(arquivo,"a"); //Abre o arquivo na pasta onde o sistema está salvo e "a" é referente a atualizar
	fprintf(file,nome);        //Salvo o valor da variável
	fclose(file);              //Fecha o arquivo
	
	file = fopen(arquivo,"a"); //Abre o arquivo na pasta onde o sistema está salvo e "a" é referente a atualizar
	fprintf(file, ",");        //Coloca uma "," na variável
	fclose(file);              //Fecha o arquivo
	
	
	
	printf("Digite o sobrenome a ser cadastrado:\n");//Coletar a informação do usuário
	scanf("%s", sobrenome);    //refere-se a string
	
	file = fopen(arquivo,"a"); //Abre o arquivo na pasta onde o sistema está salvo e "a" é referente a atualizar
	fprintf(file,sobrenome);   //Salvo o valor da variável
	fclose(file);              //Fecha o arquivo
	
	file = fopen(arquivo,"a"); //Abre o arquivo na pasta onde o sistema está salvo e "a" é referente a atualizar
	fprintf(file, ",");        //Coloca uma "," na variável
	fclose(file);              //Fecha o arquivo
	
	
	
	printf("Digite o cargo a ser cadastrado:\n");//Coletar a informação do usuário
	scanf("%s", cargo);        //refere-se a string
	
	file = fopen(arquivo,"a"); //Abre o arquivo na pasta onde o sistema está salvo e "a" é referente a atualizar
	fprintf(file,cargo);       //Salvo o valor da variável
	fclose(file);              //Fecha o arquivo
		
	system("pause");           //Congela a tela para que ela não saia do local até uma tecla ser precionada
	
	
}

int consulta()  //Função responsável por cadastrar os usuários no sistema
{
	printf("Você escolheu consultar nomes.\n\n");
	
	setlocale(LC_ALL, "Portuguese"); //Definindo linguagem
	
	
	//ínicio da criação das variáveis
	char cpf[40];
	char conteudo[200];
	
	
	
	printf("Digite o CPF a ser consultado:\n"); //Coletar a informação do usuário a ser consultado
	scanf("%s", cpf);         //refere-se a string
	
	FILE *file;               //Cria o arquivo 
	file = fopen(cpf,"r");    //Abre o arquivo na pasta onde o sistema está salvo e "r" é referente a ler
	
	if(file == NULL)          //Condição se o valor não for encontrado
	{
		printf("Não foi possível encontrar o arquivo solicitado, pois o CPF não foi localizado.\n");
	    printf("Por favor, tente novamente.\n\n");  
	}
	
	while(fgets(conteudo, 200, file) != NULL)  //Condição caso o usuário seja encontrado
	{
		printf("\nEssas são as informações do usuário:");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	
	system("pause");          //Congela a tela para que ela não saia do local até uma tecla ser precionada
}



int deletar()//Função responsável por deletar os usuários no sistema
{
	printf("Você escolheu deletar nomes.\n");
	setlocale(LC_ALL, "Portuguese"); //Definindo linguagem
	
	
	//Variáveis
	char cpf[40];
	
	
	printf("Digite o CPF do usuário a ser deletado:"); //Coletar a informação do usuário a ser deletado
	scanf("%s",cpf);         //refere-se a string
	
	remove(cpf);             //Remove a variável do sistema
	
	FILE*file;               //Cria o arquivo
	file = fopen(cpf,"r");   //Abre o arquivo na pasta onde o sistema está salvo e "r" é referente a ler
	
	if(file == NULL)         //Condição caso o usuário não seja encontrado.
	{
		printf("O usuário não se encontra no sistema!\n");
	}
	
	if(file != NULL)         //Condição caso o usuário seja encontrado e deletado
	{
		printf("\nEsse usuário foi deletado.");
		printf("\n");
	}
	
	
	system("pause");          //Congela a tela para que ela não saia do local até uma tecla ser precionada
}


int main()

{
    //variáveis
	int opcao=0;
	int laco=1;
	
	for(laco=1;laco=1;)
	{
		system("cls"); // responsável por limpar a tela
		
	    setlocale(LC_ALL, "Portuguese"); //Definindo linguagem
	
	//Inicio do Menu
	    printf("### Cartório da EBAC ###\n\n");
  	    printf("Escolha a opção desejada do menu:\n\n");
	
	    printf("\t1-  Registrar nomes\n");
	    printf("\t2-  Consultar nomes\n");
	    printf("\t3-  Deletar nomes\n");
	    printf("\t4-  Sair do sistema\n\n")
	
	    ;printf("Esse Software é de livre uso dos alunos.\n\n"); 
	
	    printf("Escolha a opção:");//Fim do menu
	
	//Armazenando as escolhas do usúario
	    scanf("%d", &opcao); 
	
	    system("cls");// responsável por limpar a tela
	
	//Inicio da seleção do menu
	
	    
	    switch(opcao)
	    {
	    	case 1:
	    	registro(); //chamada de funções
		    break;
		    
		    case 2:
		    consulta();//chamada de funções
		    break;
		    
		    case 3:
		    deletar();//chamada de funções
		    break;
		    
		    case 4:
		    printf("\n\nObrigado por utilizar o sistema!\n\n");
		    return 0;
		    break;
		    
		    ;default: //Função para caso nenhum dos cases seja selecionado
		    printf("Essa opção não está disponível.\n");
		    system("pause");
		    break;
		    	
		}
	    
	   
	//Fim da seleção
    }
}
