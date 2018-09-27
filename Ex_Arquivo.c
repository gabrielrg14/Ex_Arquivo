#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *arq;
	char nomeArq[100], aux;
	int tam=0, contL=1;
	
	printf("Entre com o nome do arquivo: ");
	scanf("%s", nomeArq);
	arq = fopen (nomeArq, "r");
	
	if(arq == NULL){
	printf("Erro ao abrir o arquivo!");
	return 1;
	}
	
	while(fscanf(arq, "%c", &aux) != EOF){
		if(aux == '\n')
			contL++;
		if(aux != '')	
	tam ++;
	}
	
	printf("Caracteres no texto: %d\n", tam);
	printf("Linhas no texto: %d\n", contL);
	
	
	return 0;
}
