#include <stdio.h>
#include <string.h>

void min_mai(char *palavra){
	char aux[255];
	int tamanho,i=0,j=0;
	tamanho = strlen(palavra);
	tamanho = tamanho - 1;
	for(i=0;i<=tamanho;i++){
	    if(palavra[i]>=97&&palavra[i]<123){
	        aux[i] = palavra[i]-32;
	    }else
	        aux[i] = palavra[i];
	}
	strcpy(palavra,aux);
	printf("A palavra e: %s\n",palavra);
}


void mai_min(char *palavra){
	char aux[255];
	int tamanho,i=0,j=0;
	tamanho = strlen(palavra);
	tamanho = tamanho - 1;
	for(i=0;i<=tamanho;i++){
	    if(palavra[i]>=65&&palavra[i]<91){
	        aux[i] = palavra[i]+32;
	    }else
	        aux[i] = palavra[i];
	}
	strcpy(palavra,aux);
	printf("A palavra e: %s\n",palavra);
}

int main(){
	char palavra[255];
	printf("Digite uma palavra: \n");
	scanf("%s",palavra);
	min_mai(palavra);
	mai_min(palavra);
	return 0;
}
