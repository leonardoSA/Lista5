#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void LeMensg(char mensg[]){
    
    printf("%s",mensg);
}

char LeString(char stri[]){
     
    scanf("\n\r%[^\n]",stri);
    return *stri;    
}

char LeCaractere(char *cara){
	
scanf("%s",&*cara);
return *cara;
}

int LeInteiro(int *num){
    
scanf("%d",&*num);
return *num;    
}

float LeFloat(float *num){
     
scanf("%f",&*num);
return *num; 
}

void PrencherVetor(float **vet,int *tam){
int i,j;
	
LeMensg("digite o tamanho do vetor\n");
LeInteiro(&*tam);

for(i=0;i<*tam;i++){
	for(j=0;j<*tam;j++){
printf("O ENDERECO DA POSICAO %d EH: %f\n",i,vet[i][j]);
}}

}

int main(){

float v1[50][50];
int tam;

PrencherVetor(&v1[][],&tam);
	
return 0;
}

