#include<stdio.h>
#include<math.h>
#include<locale.h>

main() {
	//comando para linguagem de Portugues
	setlocale (LC_ALL, "Portuguese");
	
	float n1,n2,soma,menos,div,mult;
	int op;  
	
	printf("Digite o primeiro valor:");
	scanf("%f", &n1);
	
	printf("Digite o segundo valor:");
	scanf("%f", &n2);
	
	printf("Qual opera��o matematica deseja, digite 1 para soma, 2 para menos, 3 para  divis�o, 4 para multiplica��o:\n");
	scanf("%d", &op);
	
	switch(op) {

		case 1:
			soma=(n1 + n2);
			printf("O resultado �:%f", soma);
		break;
		
		case 2:
			menos=(n1 - n2);
			printf("O resultado �:%f", menos);
			break;
			
		case 3:
			div=(n1/n2);
			printf("O resultado �:%f", div);
			break;
			
		case 4:
			mult=(n1*n2);
			printf("O resultado �:%f", mult);
			break;
		
			
	}

	}

