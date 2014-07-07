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

void PrencherVetor(int vet[], int *tam){
int i;
	
LeMensg("digite o tamanho do vetor\n");
LeInteiro(&*tam);

for(i=0;i<*tam;i++){
	LeInteiro(&vet[i]);	
}
}

int SomaVetor(int vet[],int vet2[], int vet3[],int tam,int tam2){
int i;

if(tam==tam2){	
	for(i=0;i<tam;i++){
		vet3[i]=vet[i]+vet2[i];}	
}
else{
	LeMensg("ERRO VETORES DE TAMANHOS DIFERENTES");
	return 1;}
	
return 0;
}

void ImprimeVetor(int vet3[],int tam,int impri){
int i;

if(impri==0){	
	for(i=0;i<tam;i++){
		printf("%d - ",vet3[i]);}
}		
}

int main(){
	
int v1[100];
int v2[100];	
int v3[100];
int tam,tam2;
int impri;

PrencherVetor(v1,&tam);
PrencherVetor(v2,&tam2);
impri=SomaVetor(v1,v2,v3,tam,tam2);
ImprimeVetor(v3,tam,impri);

return 0;
}
