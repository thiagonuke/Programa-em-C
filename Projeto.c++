#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <locale.h>
void menu(); // procedimento
void ValorPago(); // procedimento 
// programa principal
int main()
{
    bool continua = true;
    char op;
    
    setlocale(LC_ALL,"Portuguese_Brazil");
    
    while(continua)
    {
    	ValorPago();
    	
    	printf("Deseja continuar (s/n)?:");
    	scanf("%c",&op);
    	if((op != 's') && (op != toupper('s')))
    	   continua = false;
    	system("cls");   
   	}
	
//	system("pause");
	return 0;
}
// subprogramas

void menu()
{
	printf("Tipo de combust�vel\n");
	printf("\n1 - Gasolina\n");
	printf("\n2 - Etanol\n");
}

void ValorPago()
{
	float litros, valoraserpago, preco;
	int tipo;
	menu();
	printf("\nEscolha uma op��o:");
	scanf("%d",&tipo);
	switch(tipo)
	{
		case 1:
			printf("Valor em litros do abastecimento: ");
			scanf("%f",&litros);
			printf("Qual o valor do combust�vel:R$ ");
			scanf("%f",&preco);
			fflush(stdin);
			if(litros<25)
			{
	  		     valoraserpago = preco*litros;
	  		     valoraserpago = valoraserpago-0.07*valoraserpago;
	  		     printf("Valor a ser pago: R$ %.2f\n",valoraserpago);
			} 	
			else
			{
                 valoraserpago = preco*litros;
	  		     valoraserpago = valoraserpago-0.09*valoraserpago;
	  		     printf("Valor a ser pago: R$ %.2f\n",valoraserpago);	
			}
        break;			
		case 2:
			printf("Valor em litros do abastecimento: ");
			scanf("%f",&litros);
			printf("Qual o valor do combust�vel:R$ ");
			scanf("%f",&preco);
			fflush(stdin);
			if(litros<25)
			{
	  		     valoraserpago = preco*litros;
	  		     valoraserpago = valoraserpago-0.05*valoraserpago;
	  		     printf("Valor a ser pago: R$ %.2f\n",valoraserpago);
			} 	
			else
			{
                 valoraserpago = preco*litros;
	  		     valoraserpago = valoraserpago-0.075*valoraserpago;
	  		     printf("Valor a ser pago: R$ %.2f\n",valoraserpago);	
			}
        break;			

		default:
			printf("\nTipo de combust�vel inv�lido !!\n");
	}
}
