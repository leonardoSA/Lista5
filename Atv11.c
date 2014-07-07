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

char LeCaractere(){
char cara;	

scanf("%s",&cara);
return cara;
}

int LeInteiro(int *num){
    
scanf("%d",&*num);
return *num;    
}

float LeFloat(float *num){
     
scanf("%f",&*num);
return *num; 
}

void PrencherVetor(int vet[],int *tam,int *k){
int i;
	
LeMensg("digite o tamanho do vetor\n");
LeInteiro(&*tam);
LeMensg("digite quantos numeros por linha\n");
LeInteiro(&*k);

LeMensg("informe os numeros do vetor\n");
	for(i=0;i<*tam;i++){
		LeInteiro(&vet[i]);}

}

void MaisDigitado(int vet[],int n){
int maior=0,i;

	
for(i=0;i<n;i++){
	if(vet[i]>maior){
		maior=vet[i];}
}
printf("O maior numero eh %d\n",maior);
}

void imprimePorLinha(int vet[],int tam, int k){
int i,cont=1;

for(i=0;i<tam;i++){
	//if(cont<k){
	   if(cont<=k){
	   printf("%d ",vet[i]);	
	   cont++;}	
	//else if(cont==k){
		else{
		printf("\n%d ",vet[i]);
		cont=1;}
}
}

int main(){
	
int vet[100];
int tam,k;

PrencherVetor(vet,&tam,&k);	
MaisDigitado(vet,tam);
imprimePorLinha(vet,tam,k);
	
return 0;
}

