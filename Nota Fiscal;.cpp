#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	char produto1[18], produto2[18], produto3[18], produto4[18], produto5[18];
    char produto6[18], produto7[18], produto8[18];
	float valor_p1, valor_p2, valor_p3, valor_p4, valor_p5, valor_p6, valor_p7; 
    float valor_p8;
	int qtd_1, qtd_2, qtd_3, qtd_4, qtd_5, qtd_6, qtd_7, qtd_8;
	int codigo1 = 541, codigo2 = 542, codigo3 = 543, codigo4 = 544, codigo5 = 545, codigo6 = 546, codigo7 = 547, codigo8 = 548; 
	
	float total, subtotal, imposto;
	
	printf("Nome do Produto: ");
	gets(produto1);
	printf("Valor do Produto: ");
	scanf("%f", &valor_p1);	
	printf("Quantidade do Produto: ");
	scanf("%d", &qtd_1);
	fflush(stdin);	
	
	
	printf("\nNome do Produto: ");
	gets(produto2);
	printf("Valor do Produto: ");
	scanf("%f", &valor_p2);
	printf("Quantidade do Produto: ");
	scanf("%d", &qtd_2);
	fflush(stdin);
	
	printf("\nNome do Produto: ");
	gets(produto3);
	printf("Valor do Produto: ");
	scanf("%f", &valor_p3);
	printf("Quantidade do Produto: ");
	scanf("%d", &qtd_3);
	fflush(stdin);
    
    
	printf("\nNome do Produto: ");
	gets(produto4);
	printf("Valor do Produto: ");
	scanf("%f", &valor_p4);	
	printf("Quantidade do Produto: ");
	scanf("%d", &qtd_4);
	fflush(stdin);	
	
	
	printf("\nNome do Produto: ");
	gets(produto5);
	printf("Valor do Produto: ");
	scanf("%f", &valor_p5);
	printf("Quantidade do Produto: ");
	scanf("%d", &qtd_5);
	fflush(stdin);
	
	printf("\nNome do Produto: ");
	gets(produto6);
	printf("Valor do Produto: ");
	scanf("%f", &valor_p6);
	printf("Quantidade do Produto: ");
	scanf("%d", &qtd_6);
	fflush(stdin);
	
	printf("\nNome do Produto: ");
	gets(produto7);
	printf("Valor do Produto: ");
	scanf("%f", &valor_p7);
	printf("Quantidade do Produto: ");
	scanf("%d", &qtd_7);
	fflush(stdin);
	
	printf("\nNome do Produto: ");
	gets(produto8);
	printf("Valor do Produto: ");
	scanf("%f", &valor_p8);
	printf("Quantidade do Produto: ");
	scanf("%d", &qtd_8);
	fflush(stdin);
    
    total = valor_p1*qtd_1 + valor_p2*qtd_2 + valor_p3*qtd_3 + valor_p4*qtd_4 + valor_p5*qtd_5 + valor_p6*qtd_6 + valor_p7*qtd_7 + valor_p8*qtd_8;
    
    system("cls");
    
    printf("|%-8s |%-8s |%-15s |%-11s |%-10s|\n", "Código", "Quant.", "Descrição", "P.Unitário", "Preço Total");
    printf("|%-8d |%-8d |%-15s |R$ %9.2f|R$ %8.2f|\n", codigo1, qtd_1, produto1, valor_p1, valor_p1*qtd_1);
    printf("|%-8d |%-8d |%-15s |R$ %9.2f|R$ %8.2f|\n", codigo2, qtd_2, produto2, valor_p2, valor_p2*qtd_2);
    printf("|%-8d |%-8d |%-15s |R$ %9.2f|R$ %8.2f|\n", codigo3, qtd_3, produto3, valor_p3, valor_p3*qtd_3);
    printf("|%-8d |%-8d |%-15s |R$ %9.2f|R$ %8.2f|\n", codigo4, qtd_4, produto4, valor_p4, valor_p4*qtd_4);
    printf("|%-8d |%-8d |%-15s |R$ %9.2f|R$ %8.2f|\n", codigo5, qtd_5, produto5, valor_p5, valor_p5*qtd_5);
    printf("|%-8d |%-8d |%-15s |R$ %9.2f|R$ %8.2f|\n", codigo6, qtd_6, produto6, valor_p6, valor_p6*qtd_6);
    printf("|%-8d |%-8d |%-15s |R$ %9.2f|R$ %8.2f|\n", codigo7, qtd_7, produto7, valor_p7, valor_p7*qtd_7);
    printf("|%-8d |%-8d |%-15s |R$ %9.2f|R$ %8.2f|\n", codigo8, qtd_8, produto8, valor_p8, valor_p8*qtd_8);
    printf("|%-8s |%-8s |%-15s |%-11s |R$ %.2f|\n", "", "", "",  "Total", total);
	
	system("pause");	
	
	return 0;	
}
