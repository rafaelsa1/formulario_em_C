#include <stdio.h>

int main () {
	int option;
	int cep;
	int numerodacasa;
	int telefone;
	int cpf;
	char nome[50],email[100],sexo;

  while (option != 3) {
	printf ("\nFormulario\n");
	printf ("1. Inserir dados:\n");
	printf ("2. Exibir dados:\n");
	printf ("3. Sair.\n");
	printf ("Escolha uma opcao:");
	scanf ("%d", &option);
	
	if (option == 1) {
		printf("Digite seu nome:");
		scanf ("%s", &nome);
		
		printf("Digite seu CEP:");
		scanf("%d", &cep);
		
		printf("Digite o numero da sua casa:");
		scanf("%d", &numerodacasa);
		
		printf("Digite seu e-mail:");
		scanf("%s", &email);
		
		printf("Digite seu Telefone:");
		scanf("%d", &telefone);
		
		printf("Digite seu CPF:");
		scanf("%s", &cpf);
		
		printf("Digite seu sexo (M/F):");
        scanf(" %c", &sexo);
            
	}else if (option == 2) {
		    printf("\nDados\n");
		    printf("Nome: %s\n", nome);
            printf("CEP: %d\n", cep);
            printf("numero da casa: %d\n", numerodacasa);
            printf("Email: %s\n", email); 
            printf("Telefone: %d\n", telefone);
            printf("CPF: %d\n", cpf);
            printf("Sexo: %c\n", sexo);
            
	}else if (option == 3) {
		printf("Saindo...\n");
	}else  {
		printf("opcao invalida. tente novamente.\n");
	}
  	}
    return 0; 
}