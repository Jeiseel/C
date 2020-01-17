#include<stdio.h>
#include<stdlib.h>

int main()
{
	// Variaveis
	int codigo, contagem, contagemproduto, pagamento;
	float total, preco;
	char* inicio;
	
	// Inicio
	while(inicio != "SAIR" | inicio != "sair")
	{
		printf("Para efetuar uma nova venda digite [VENDER]:\n");
		printf("Para sair do programa digite [SAIR]:\n");
		scanf("%s",&inicio);
		
		//Verificar
		if(inicio =="SAIR"  |  inicio == "sair")break;
		
		total = 0;
		codigo = 0;
		contagemproduto = 0;
		
		printf("\n\n\n\n\NOVA VENDA.... \n");
		
		//Looping do 
		do
		{
			printf("Se quiser cancelar a venda digite [0]:\n");
			printf("insira o codigo do produto!:\n");
			scanf("%d",&codigo);
			if(codigo = 0)
			{
				printf("Informe o preco do produto!:\n");
				scanf("%f",&preco);
				printf("informe a quantidade de produtos!:\n");
				scanf("%d",&contagem);
				
				total= total +(preco*contagem);
				contagemproduto = contagemproduto + contagem;
			}
		}while (codigo !=0);
		
		printf("Total de produtos : %d\n", &contagemproduto);
		printf("Valor total: %d\n", &total);
		printf("Informe o valos de parcelas da compra:\n");
		scanf("%d",&pagamento);
		if (pagamento <= 1)
		{
			total = total - (total* 0.1);
			printf("total de produtos: %d\n", &contagemproduto);
			printf("Preco total com desconto de 10%: %.2f\n",&total);
		}
		else
		{
			if(pagamento > 5)
			{
				total =  total * 1.2;
				printf("Total de produtos:%d\n",&contagemproduto);
				printf("Preco total com almento de 20%: %.2f\n",&total);
				total = total / pagamento;
				printf("Total de cada parcela eh:%.2f\n",&total);
				
			}
			else
			{
				printf("Total de produtos: %d\n",&contagemproduto);
				printf("preco total: \n",&total);
				total = total / pagamento;
				printf("Total de cada parcela eh: %.2f\n", &total);
			}
		}
	printf("\n\n\n\n\n\n OBRIGADO PELA PREFERENCIA, VOLTE SEMPRE!!! \n\n\n\n\n\n");
			
			
		system("pause");
		return 0;
		
}
}
